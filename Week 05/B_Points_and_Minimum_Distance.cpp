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
    int n2=2*n;
    vii a(n2);
  
    for(int i=0;i<n2;i++) cin>>a[i];

    sort(a.begin(),a.end());

    vii tmp1(n),tmp2;
    for(int i=0;i<n;i++){
        tmp1[i]=a[i];
    }
    for(int i=n;i<n2;i++){
        int x=a[i];
        tmp2.pb(x);
    }
    vector<pair<int,int>> pr;
    for(int i=0;i<n;i++){
        pr.pb({tmp1[i],tmp2[i]});
    }
    int sum=0;
    for(int i=0;i<pr.size()-1;i++){
        int s=abs(pr[i].first - pr[i+1].first);
        int ss=abs(pr[i].second - pr[i+1].second);
        sum+=(s+ss);
    }

    cout<<sum<<endl;
    
    for(auto u:pr){
        cout<<u.first<<" "<<u.second<<endl;
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