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
    vector<int> a[26];
    for(int i=0;i<n;i++){
        a[s[i]-'a'].push_back(i);
    }
    bool flag=true;
    for(auto u:a){
        for(int i=1;i<u.size();i++){
            if((u[i]-u[i-1])%2==0){
                flag=false;
                break;
            }
        }
    }
    if(flag) yes
    else no
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