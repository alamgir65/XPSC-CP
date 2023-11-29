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
    int n; cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vii v;
    for(auto [x,y]:mp){
        v.pb(y);
    }
    sort(v.begin(),v.end());
    int sz=mp.size();
    int ans=imax;
    for(int i=0;i<sz;i++){
        int eq_or_mx=sz-i;
        if((n-(v[i]*eq_or_mx)) < ans){
            ans=n-(v[i]*eq_or_mx);
        }
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