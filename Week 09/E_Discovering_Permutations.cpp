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
    int n,k; cin>>n>>k;
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string p,q;
    p=s.substr(0,n);
    q=p;
    for(int i=1;i<=k;i++){
        cout<<p<<endl;
        next_permutation(all(p));
        if(p==q) break;
    }
}
int main(){
    Alamgir
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<":"<<endl;
        solve();
    }
    return 0;    
}