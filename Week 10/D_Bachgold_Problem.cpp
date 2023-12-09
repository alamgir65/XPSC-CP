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
    ll n; cin>>n;
    vii ans;
    if(n%2 == 1){
        ans.pb(3);
        n-=3;
    }
    int m=n/2;
    while(m--) ans.pb(2);
    cout<<(ans.size())<<endl;
    for(int val:ans) cout<<val<<" ";
    cout<<endl;
}
int main(){
    Alamgir
    solve();
    return 0;    
}