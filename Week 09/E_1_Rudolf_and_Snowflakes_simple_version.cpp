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
const int N=1e6+5;
void solve(){
    ll n; cin>>n;
    vector<bool> pos(N,false);
    for(ll k=2;;k++){
        ll x=k*k;
        ll total=1+k+x;
        if(total>N) break;
        while(total<=N && total>0){
            pos[total]=true;
            total += x*k;
            x*=k;
        }
    }
    if(pos[n]) yes
    else no
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