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
    string s,t; cin>>s>>t;
    int n=s.size(),m=t.size();
    if(n<m){
        no
        return;
    }
    string f;
    int i=n-1,j=m-1;
    while(i>=0 && j>=0){
        if(s[i]==t[j]){
            f.push_back(s[i]);
            i--;
            j--;
        }
        else if(s[i]!=t[j]){
            i-=2;
        }
    }
    reverse(f.begin(),f.end());
    if(f==t) yes
    else no
    //cout<<f<<endl;
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