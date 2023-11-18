#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        pii a[n+1]; int b[n+3];
        for(int i=1;i<=n;i++){
            int x; cin>>x;
            a[i]={x,i};
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        sort(a+1,a+n+1);
        sort(b+1,b+n+1);
        int ans[n+3];
        for(int i=1;i<=n;i++){
            ans[a[i].second]=b[i];
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}