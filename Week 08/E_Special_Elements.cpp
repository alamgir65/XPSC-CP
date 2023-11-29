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
    int n; cin>>n;
    int a[n];
    vii mp(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ll sum=0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(i==j) continue;
            if(sum<=n){
                ans += mp[sum];
                mp[sum]=0;
            }
        }
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