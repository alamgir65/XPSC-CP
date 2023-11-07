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
bool cmp(pair<char,int> a,pair<char,int> b){
    return a.first>b.first;
}
void solve(){
    string s; cin>>s;
    int p; cin>>p;
    int sum=0;
    int n=s.size();
    vtr<pair<char,int>> v;
    for(int i=0;i<s.size();i++){
        sum+=(s[i]-96);
        v.pb({s[i],i});
    }
    sort(v.begin(),v.end(),cmp);
    vii index(n+1,0);
    for(auto val:v){
        if(sum<=p){
            break;
        }
        sum-=(val.first-96);
        index[val.second]=-1;
    }
    for(int i=0;i<n;i++){
        if(index[i]!=-1){
            cout<<s[i];
        }
    }
    cout<<endl;
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