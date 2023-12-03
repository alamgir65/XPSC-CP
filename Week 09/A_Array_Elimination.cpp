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
    int n; cin>>n;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll cnt=0;
    for(int i=0;i<30;i++){
        ll tmp=0;
        for(int k=0;k<n;k++){
            tmp += a[k] >> i & 1;
        }
        cnt=__gcd(cnt,tmp);
    }
    for(int i=1;i<=n;i++){
        if(cnt % i==0){
            cout<<i<<" ";
        }
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