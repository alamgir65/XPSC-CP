#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n; cin>>n;
    vii a(n+1);
    priority_queue<pair<int,int>> pq;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>0) pq.push({a[i],i});
    }
    vector<pii> ans;
    while(pq.size()>1){
        auto f=pq.top();
        pq.pop();
        auto s=pq.top();
        pq.pop();
        ans.push_back({f.second,s.second});
        f.first--;
        s.first--;
        if(f.first) pq.push(f);
        if(s.first) pq.push(s);
    }
    out(ans.size())
    for(auto u:ans){
        cout<<u.first<<" "<<u.second<<endl;
    }
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}