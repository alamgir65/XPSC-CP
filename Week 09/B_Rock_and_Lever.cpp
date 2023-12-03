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
    vll a(n);
    ll msb[33]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        ll x=a[i],cnt=0;
        while(x>0){
            x/=2;
            cnt++;
        }
        msb[cnt]++;
    }
    ll cnt=0;
    for(int i=0;i<33;i++){
        if(msb[i]>=2){
            cnt += ((msb[i]*(msb[i]-1))/2);
        }
    }
    cout<<cnt<<endl;
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