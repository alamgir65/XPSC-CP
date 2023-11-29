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
    ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll x=0;
    bool flag=false;
    for(ll i=0;i<n;i++){
        ll m=i+2;
        if(a[i]%m!=0){
            x++;
        }
        else{
            flag=false;
            for(int j=1;j<=x;j++){
                if(a[i]%(m-j)!=0){
                    x++;
                    flag=true;
                    break;
                }
            }
            if(!flag){
                no
                return;
            }
        }
    }
    yes
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