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
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    if(m==1){
        if(t[0]=='a') cout<<1<<endl;
        else{
            ll ans=(1LL<<n);
            cout<<ans<<endl;
        }
    }
    else{
        int cnt=count(t.begin(),t.end(),'a');
        if(cnt>0){
            cout<<-1<<endl;
        }
        else{
            ll ans=(1LL<<n);
            cout<<ans<<endl;
        }
    }
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