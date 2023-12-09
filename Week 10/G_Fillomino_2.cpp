#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n][n];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        int x; cin>>x;
        int j=i,k=i,y=x;
        while(y--){
            a[j][k]=x;
            if(k!=0 && a[j][k-1]==0) k--;
            else j++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}