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
    ll n,x; cin>>n>>x;
    map<ll,ll> mp;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll cnt=0;
    sort(a,a+n);
    for(ll i=0;i<n;i++){
        if(mp[a[i]]==0) continue;
        if(mp[(a[i]*x)] != 0){
            mp[(a[i]*x)]--;
            mp[a[i]]--;
        }
        else{
            cnt++;
            mp[a[i]]--;
        }
    }
    cout<< cnt <<endl;
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