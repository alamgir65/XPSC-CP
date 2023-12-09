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
    vii ans;
    ans.pb(n);
    while(__builtin_popcount(n)>1){
        int p=__builtin_ctz(n);
        n-= (1<<p);
        ans.pb(n);
    }
    while(n>1){
        n/=2;
        ans.pb(n);
    }
    cout<<ans.size()<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
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