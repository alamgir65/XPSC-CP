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
    string s; cin>>s;
    int n=s.size();
    vtr<pair<char,int>> v;
    char mn=min(s[0],s[n-1]);
    char mx=max(s[0],s[n-1]);
    for(int i=0;i<n;i++){
        if(s[i]>=mn && s[i]<=mx){
            v.push_back({s[i],i});
        }
    }
    sort(v.begin(),v.end(),[&](pair<char,int> a,pair<char,int> b){
        return a.second<b.second;
    });
    if(v.size()>2){
        sort(v.begin()+1,v.begin()+v.size()-1,[&] (pair<char,int> a,pair<char,int> b){
            if(s[0]>s[n-1]) return a.first > b.first;
            return a.first<b.first;
        });
    }
    vector<int> ans;
    ll cnt=0;
    ans.pb(1);
    for(int i=1;i<v.size();i++){
        cnt += abs(v[i].first - v[i-1].first);
        ans.push_back(v[i].second+1);
    }
    cout<<cnt<<" "<<ans.size()<<endl;
    for(auto u:ans){
        cout<<u<<" ";
    }
    cout<<'\n';
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