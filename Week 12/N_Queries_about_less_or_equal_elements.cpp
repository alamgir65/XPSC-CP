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
bool tmp(ll a,ll b){
    return a<=b;
}
void solve(){
    ll n,m; cin>>n>>m;
    vll a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(all(a));
    for(int i=0;i<m;i++){
        ll x; cin>>x;
        ll l=1,r=n;
        ll ans=0;
        while(l<=r){
            ll mid=(l+r)/2;
            if(a[mid]<=x){
                l=mid+1;
                ans=mid;
            }
            else{
                r=mid-1;
            }
        }
        cout<<(ans)<<" ";
    }
}
int main(){
    Alamgir
    solve();
    return 0;    
}