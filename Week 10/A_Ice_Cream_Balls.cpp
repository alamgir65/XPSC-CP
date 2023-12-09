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
    ll n,ans,x; cin>>n;
    ll l=1,r=2e9;
    while(r-l >1){
        ll mid=l+(r-l)/2;
        ll m=mid*(mid-1)/2;
        if(m<=n){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    x=l*(l-1)/2;
    cout<<(n-x)+l<<endl;
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