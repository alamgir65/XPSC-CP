#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n][n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>a[i][j];
            }
        }
        int frq[n+1]={0};
        for(int i=0;i<n;i++){
            frq[a[i][0]]++;
        }
        int x,y;
        for(int i=0;i<n;i++){
            if(frq[a[i][0]]==n-1){
                x=a[i][0];
            }
            if(frq[a[i][0]]==1){
                y=a[i][0];
            }
        }
        cout<<x<<" ";
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(a[i][0]!=x){
                    cout<<a[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}