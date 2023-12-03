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
    vii ans;
    vector<bool> visited(n+1,false);
    int curr=1;
    for(int i=2;i<=n;i++){
        if(!visited[i]){
            ans.pb(i);
            visited[i]=true;
            curr=i;
            while(curr*2 <= n){
                ans.pb(curr*2);
                visited[curr*2]=true;
                curr*=2;
            }
        }
    }
    cout<<1<<" ";
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