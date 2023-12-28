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
    ll mx=0;
    string s; cin>>s;
    unordered_map<char,ll> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if((mp[s[i]])>mx){
            mx=mp[s[i]];
        }
        
    }
   if(mx > n/2){
    cout<< 2*mx -n <<endl;
   }
   else{
    if(n%2==1) cout<<1<<endl;
    else cout<<0<<endl;
   }
    
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