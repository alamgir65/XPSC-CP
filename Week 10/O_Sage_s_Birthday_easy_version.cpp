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
    ll n; cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vll ans;
    stack<ll> s1,s2;
    sort(all(a));
    if(n%2==0){
        for(ll i=0;i<n;i++){
            if(i < n/2){
                s1.push(a[i]);
            }
            else{
                s2.push(a[i]);
            }
        }
        while(!s1.empty() && !s2.empty()){
            ans.push_back(s2.top());
            ans.push_back(s1.top());
            s2.pop();
            s1.pop();
        }
    }
    else{
        //ans.push_back(a[n-1]);
        for(ll i=0;i<n-1;i++){
            if(i < n/2){
                s1.push(a[i]);
            }
            else{
                s2.push(a[i]);
            }
        }
        while(!s1.empty() && !s2.empty()){
            ans.push_back(s2.top());
            ans.push_back(s1.top());
            s2.pop();
            s1.pop();
        }
        ans.push_back(a[n-1]);
    }
    ll cnt=0;
    for(ll i=1;i<n-1;i++){
        if(ans[i]<ans[i-1] && ans[i]<ans[i+1]) cnt++;
    }
    cout<<cnt<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    Alamgir
    solve();
    return 0;    
}