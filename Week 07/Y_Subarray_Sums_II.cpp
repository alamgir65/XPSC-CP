#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
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
    ll n,k; cin>>n>>k;
    map<ll,ll> mp;
    ll sum=0;
    ll cnt=0;
    mp[sum]=1;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        sum+=x;
        cnt+=mp[sum-k];
        mp[sum]++;
    }
    cout<<cnt<<endl;
}
int main(){
    Alamgir
    solve();
    return 0;    
}