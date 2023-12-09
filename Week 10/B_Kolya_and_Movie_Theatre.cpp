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
    ll n,m,d; cin>>n>>m>>d;
    vll a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        a[i]-=d;
        a[i]=max(-d,a[i]);
    }
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll sum=0,ans=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        pq.push(a[i]);
        if(pq.size()>m){
            ll x=pq.top();
            pq.pop();
            sum -= (x+d);
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
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