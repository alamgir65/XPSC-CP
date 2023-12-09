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
    string s; cin>>s;
    int frq[26]={0};
    for(int i=0;i<n;i++){
        frq[s[i]-'a']++;
    }
    int pair=0,odd=0;
    for(int i=0;i<26;i++){
        pair += frq[i]/2;
        odd += frq[i]%2;
    }
    int x=pair/k;
    odd += (pair%k)*2;
    x*=2;
    if(odd>=k) x++;
    cout<<x<<endl;
    
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