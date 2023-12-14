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
    ll n,k,b,missed,last;
    cin>>n>>k;
    vector < ll > v,t;
    for(ll i = 0 ; i < n ; i++) {
        cin>>b;
        v.push_back(b);
    }
    t = v;
    sort(t.begin(), t.end());
    missed = n;
    for(ll i = 0; i < n ; i++) {
        if(t[i] != i) {
            missed = i;
            break;
        }
    }
    ll tmp;
    for(ll i = 0 ; i < n ; i++) {
        tmp = v[i];
        v[i] = missed;
        missed = tmp;   
    }
    v.push_back(missed);
        
    last = (k-1)%(n+1);
    for(ll i = (n+1-last); i < (n+1) ; i++) {
        cout<<v[i]<<" ";
    }
    for(ll i = 0; i < (n-last); i++) {
        cout<<v[i]<<" ";
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