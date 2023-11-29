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
    string s; cin>>s;
    int oper=0,cnt=0;
    int mx=0;
    bool f=true;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            oper++;
            cnt++;
            mx=max(mx,cnt);
        }
        else{
            mx=max(cnt,mx);
            cnt=0;
        }
    }
    if(mx>=3) cout<<2<<endl;
    else cout<<oper<<endl;
    //cout<<oper<<endl;
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