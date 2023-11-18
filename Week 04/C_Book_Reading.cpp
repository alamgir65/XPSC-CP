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
    ll n,m; cin>>n>>m;
    vector<int> v;
    for(int i=m;;i+=m){
        v.pb(i%10);
        if(i%10==0) break;
    }
    ll sum=0;
    for(int val:v){
        sum+=val;
    }
    ll ans=0;
    ll div,rem;
    div=n/m;
    rem=div%v.size();
    ans+= sum*(div/v.size());
    for(int i=0;i<rem;i++){
        ans+=v[i];
    }
    cout<<ans<<endl;
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