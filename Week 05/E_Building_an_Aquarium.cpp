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
    ll n,x; cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll l=0,r=INT_MAX;
    ll ans;
    while(l<=r){
        ll reserve=x;
        ll mid=l+(r-l)/2;
        for(int i=0;i<n;i++){
            if(mid>a[i]){
                reserve-=(mid-a[i]);
            }
        }
        if(reserve>=0){
            ans=mid;
            l=mid+1;
        }
        else if(reserve < 0){
            r=mid-1;
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