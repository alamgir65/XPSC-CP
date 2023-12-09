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
    ll a[n+1];
    //map<int> mp;
    map<ll,ll> mp;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]-i]++;
    }
    ll cnt=0;
    for(auto u:mp){
        ll x=u.second;
        cnt += (x*(x-1))/2;
    }
    cout<<cnt<<endl;
}
int main(){
    Alamgir
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}