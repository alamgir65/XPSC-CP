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
    string s; cin>>s;
    int n=s.size();
    if(s.size()<=1){
        cout<<1<<endl;
        return;
    }
    int one=0,zero=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    if(one==zero){
        cout<<0<<endl;
        return;
    }
    string tmp=s;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && one>0){
            s[i]='1';
            one--;
        }
        else if(s[i]=='1' && zero>0){
            s[i]='0';
            zero--;
        }
    }
    int cnt=0,idx=0;
    for(int i=0;i<n;i++){
        if(s[i]!=tmp[idx]){
            idx++;
            continue;
        }
        else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
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