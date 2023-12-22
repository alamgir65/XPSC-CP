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
const int N=2e5+7;
ll n,k; 
ll a[N];
bool ok(ll mid){
    ll sum=0;
    for(ll i=n/2 +1;i<=n;i++){
        //sum += max(mid-a[i],0);
        if((mid-a[i])>0) sum+= (mid-a[i]);
    }
    return sum<=k;
}
void solve(){
    cin>>n>>k;
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    ll l=0,r=2e9;
    ll ans;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(ok(mid)){
            l=mid+1;
            ans=mid;
        }
        else{
            r=mid-1;
        }
    }
    cout<< ans <<endl;
}
int main(){
    Alamgir
    solve();
    return 0;    
}