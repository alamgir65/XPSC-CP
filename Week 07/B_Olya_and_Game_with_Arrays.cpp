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
    ll n; cin>>n;
    ll mn1=LONG_LONG_MAX,mn2=LONG_LONG_MAX;
    vector<vector<ll>> v(n);
    for(int i=0;i<n;i++){
        ll m; cin>>m;
        for(int j=0;j<m;j++){
            ll x; cin>>x;
            v[i].pb(x);
        }
    }
    for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
    }
    for(int i=0;i<n;i++){
        mn1=min(mn1,v[i][0]);
        mn2=min(mn2,v[i][1]);
    }
    ll sum=0,cnt=0;
    for(int i=0;i<n;i++){
        if(v[i][1]==mn2 && cnt==0) cnt++;
        else sum+=v[i][1];
    }
    sum+=mn1;
    cout<<sum<<endl;
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