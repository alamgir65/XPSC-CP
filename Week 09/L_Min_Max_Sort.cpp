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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vii pos(n+1);
    for(int i=0;i<n;i++){
        pos[a[i]]=i;
    }
    int len[n+1];
    len[n]=1;
    for(int i=n-1;i>=1;i--){
        if(pos[i]<pos[i+1]){
            len[i]=len[i+1]+1;
        }
        else{
            len[i]=1;
        }
    }
    int ans=n;
    for(int i=1;i<=n;i++){
        ans=min(ans,max(i-1,n-(i+len[i]-1)));
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