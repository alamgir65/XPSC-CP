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
    int n; cin>>n;
    ll ans=0;
    for(int i=1;i<n;i++){
        vii v1,v2;
        for(int j=1;j<=i-1;j++) v1.pb(j);
        for(int j=i;j<=n;j++) v2.pb(j);
        reverse(all(v2));
        for(auto v:v2) v1.pb(v);
        ll sum=0;
        ll mx=0;
        for(int j=1;j<=n;j++){
            sum += (j*v1[j-1]);
            if((j*v1[j-1])>mx) mx=j*v1[j-1];
        }
        ans = max(ans,sum-mx);
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