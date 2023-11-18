#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n,m,k; cin>>n>>m>>k;
    ll a[m+1];
    for(int i=0;i<=m;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<=m;j++){
            ll x=a[i],y=a[j];
            ll xx=(x^y);
            int cnt=0;
            while(xx>0){
                cnt+=(xx&1);
                xx=xx>>1;
            }
            if(cnt<=k){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    Alamgir
    solve();
    return 0;    
}