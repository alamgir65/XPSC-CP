#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n; cin>>n;
    vll a(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    vll ans(n+1,0);
    sort(all(a));
    int j=1;
    for(ll i=2;i<=n;i+=2){
        ans[i]=a[j++];
    }
    for(ll i=1;i<=n;i++){
        if(ans[i]==0) ans[i]=a[j++];
    }
    ll cnt=0;
    for(ll i=2;i<n;i++){
        if(ans[i]<ans[i-1] && ans[i]<ans[i+1]) cnt++;
    }
    cout<<cnt<<endl;
    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Alamgir
    solve();
    return 0;    
}