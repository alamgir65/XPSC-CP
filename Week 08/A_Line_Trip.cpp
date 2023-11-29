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
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int d=a[0];
    int mx=a[0];
    for(int i=1;i<n;i++){
        d=max(d,a[i]-a[i-1]);
        if(a[i]>mx){
            mx=a[i];
        }
    }
    int ans=max(d,2*(k-mx));
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