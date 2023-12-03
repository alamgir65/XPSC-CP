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
    ll a[n],b[n],Dmn[n],Dmx[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    int j=0;
    for(ll i=0;i<n;i++){
        while(b[j]<a[i]) j++;
        Dmn[i]=b[j]-a[i];
    }
    j=n-1;
    Dmx[n-1]=b[n-1]-a[n-1];
    for(ll i=n-2;i>=0;i--){
        if(a[i+1]<=b[i]){
            Dmx[i]=b[j]-a[i];
        }
        else{
            j=i;
            Dmx[i]=b[j]-a[i];
        }
    }
    for(auto v:Dmn){
        cout<<v<<" ";
    }
    cout<<endl;
    for(auto v:Dmx){
        cout<<v<<" ";
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