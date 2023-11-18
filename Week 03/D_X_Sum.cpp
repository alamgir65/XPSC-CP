#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isValid(int i,int j,int n,int m){
    return (i>=0 && i<n && j>=0 && j<m);
}
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        ll mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll sum=0;
                //sum+=a[i][j];
                int ni=i,nj=j;
                while(isValid(ni,nj,n,m)){
                    sum+=a[ni][nj];
                    ni--;
                    nj--;
                }
                ni=i,nj=j;
                while(isValid(ni,nj,n,m)){
                    sum+=a[ni][nj];
                    ni--;
                    nj++;
                }
                ni=i,nj=j;
                while(isValid(ni,nj,n,m)){
                    sum+=a[ni][nj];
                    ni++;
                    nj--;
                }
                ni=i,nj=j;
                while(isValid(ni,nj,n,m)){
                    sum+=a[ni][nj];
                    ni++;
                    nj++;
                }
                sum = sum - (3*a[i][j]);
                mx=max(mx,sum);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}