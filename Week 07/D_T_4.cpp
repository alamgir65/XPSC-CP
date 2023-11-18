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
    ll a,b; cin>>a>>b;
    ll g=__gcd(a,b);
    bool flag=true;
    while(b>1){
        if(g==1){
            flag=false;
            break;
        }
        b/=g;
        g=__gcd(b,g);
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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