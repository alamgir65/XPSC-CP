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
    ll n,m; cin>>n>>m;
    //ll k=1;
    vector<int> a[n+1];
 
    int value=1;
    for(int i=1;i<=n;i++){
        a[i].resize(m+1);
        for(int j=1;j<=m;j++){
            a[i][j]=value;
            value++;
        }
    }
    for(ll i=2;i<=n;i+=2){
        for(ll j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(ll i=1;i<=n;i+=2){
        for(ll j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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