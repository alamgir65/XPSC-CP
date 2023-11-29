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
const int MOD=1e9+7;
ll power(ll base,ll n){
    ll result=1;
    while(n){
        if(n%2==1){
            result = (result*base)%MOD;
            n--;
        }
        else{
            base=(base*base)%MOD;
            n/=2;
        }
    }
    return result%MOD;
}
void solve(){
    ll n,k;
        cin>>n>>k;
        string v;
        while(k)
        {
            if(k%2==0)v+='0';
            else v+='1';
            k/=2;
        }
        ll ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=='1')ans+=power(n,i);
            ans%=MOD;
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