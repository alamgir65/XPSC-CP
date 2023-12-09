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
    ll n,q; cin>>n>>q;
    ll a[n+3]={0};
    for(ll i=1;i<=n;i++) cin>>a[i];
    ll sum=0;
    ll mx=1,mn=2;
    while(mn <= n+1 && mx <= n){
        while(mx <= n && a[mn]>a[mx]){
            mx++;
            mn++;
        }
        while(mn <= n && a[mn+1] < a[mn]){
            mn++;
        }
        if(mx <= n && a[mn] < a[mx]){
            sum += (a[mx]-a[mn]);
            mx = mn+1;
            mn = mx+1;
        }
        else break;
    }
    cout<<sum<<endl;
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