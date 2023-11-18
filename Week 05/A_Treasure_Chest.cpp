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
    int x,y,k; cin>>x>>y>>k;
    if(x==y) cout<<x<<endl;
    else if(x>y) cout<<x<<endl;
    else{
        int d=y-x;
        int ans=y;
        if(d>k){
            ans+=(d-k);
        }
        cout<<ans<<endl;
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