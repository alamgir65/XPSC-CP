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
    ll n,b; cin>>n>>b;
    ll a[n];
    int ans=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if((a[i]&b)==b){
            ans=ans&a[i];
        }
    }
    //cout<<v.size()<<endl;
    if(ans==b) yes
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