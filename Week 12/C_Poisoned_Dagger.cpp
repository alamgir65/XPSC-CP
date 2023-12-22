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
ll cheak(ll a[],ll n,ll k){
    //sort(a,a+n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(i==n-1){
            sum += k;
            continue;
        }
        ll x=a[i+1]-a[i];
        if(x>=k){
            sum += k;
        }
        else{
            sum += x;
        }
        //sum += x;
    }
    return sum;
}
void solve(){
    ll n,h; cin>>n>>h;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll l=1,r=h;
    ll ans=h;
    while(l<=r){
        ll mid=(l+r)/2;
        if(cheak(a,n,mid)>=h){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<< ans <<endl;
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