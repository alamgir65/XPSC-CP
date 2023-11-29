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
    map<int,int> mp;
    vii a;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        mp[x]++;
        if(mp[x]>1 || x>n){
            a.push_back(x);
        }
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int ans=a.size();
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            int x=a.back();
            a.pop_back();
            if(x%(x-i)==i) continue;
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<ans<<endl;
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