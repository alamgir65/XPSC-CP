#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n+3];
    for(int i=1;i<=n;i++) cin>>a[i];
    int ans=2;
    int m=0;
    for(int i=2;i<=1000;i++){
        int s=0;
        for(int j=1;j<=n;j++){
            if(a[j]%i==0) s++;
        }
        if(m<s){
            m=s;
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}