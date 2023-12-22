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
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        if(x<=3){
            no
            continue;
        }
        //int cnt=0;
        ll a=sqrt(x);
        ll j;
        for(j=2; j*j<=a;j++){
            if(a%j==0){
                break;
            }
        }
        if(j*j > a && a*a==x && x>1) yes
        else no
    }
}
int main(){
    Alamgir
    solve();
    return 0;    
}