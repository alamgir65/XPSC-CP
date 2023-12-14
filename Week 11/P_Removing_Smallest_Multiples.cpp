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
    vii a;
    string s; cin>>s;
    s ="$"+s;
    vii visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(s[i]=='1') visited[i]=2;
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(visited[j]==0){
                ans += i;
                visited[j]=1;
            }
            else if(visited[j]==2) break;
        }
    }
    cout<< ans << endl;

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