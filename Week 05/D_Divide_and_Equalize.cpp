#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define el '\n'
#define vtr vector
#define out(x) cout<<x<<"\n";
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
bool AreSame(double a, double b){
    return fabs(a - b) < 1e-14;
}
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll mx = 0;
    for(ll i = 0; i < n; i++){
        cin>>a[i];
        mx = max(mx, a[i]);
    }
    ll l = 1, r = mx;
    while(l <= r){
        ll mid = (l + r) / 2;
        //cout<<mid<<el;
        double ans = 1.0;
        for(ll i = 0; i < n; i++){
            ans *= (a[i] * 1.0 / mid * 1.0);
        }
        //out((double)ans)
        if(AreSame(ans, 1.0)){
            yes
            return;
        }
        else if(ans > 1){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    no
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