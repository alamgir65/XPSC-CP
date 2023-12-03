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
    string s; cin>>s;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum=0;
    //cout<<sum<<endl;
    //vector<bool> v(n,false);
    int mn=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            int x=max(mn,a[i]);
            sum += x;
        }
        if(s[i]=='0' || mn > a[i]){
            mn=a[i];
        }
    }
    cout<<sum<<endl;
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