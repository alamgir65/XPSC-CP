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
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<int> s;
    for(auto it:mp){
        if(it.second>=2){
            s.pb(it.first);
        }
    }
    if(s.size()<2) cout<<-1<<endl;
    else{
        vii b;
        bool ok1=0,ok2=0;
        for(int val:a){
            if(val==s[0]){
                b.pb(ok1? 2:1);
                ok1=1;
            }
            else if(val==s[1]){
                b.pb(ok2? 3:1);
                ok2=1;
            }
            else b.pb(1);
        }
        for(int val:b){
            cout<<val<<" ";
        }
        cout<<endl;
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