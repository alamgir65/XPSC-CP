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
    vii ans(n);
    ans[0]=a[0];
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]+a[i];
        if(a[i]!=0 && ans[i-1]-a[i]>=0){
            cout<<-1<<endl;
            return;
        }
    }
    for(int val:ans){
        cout<<val<<" ";
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
