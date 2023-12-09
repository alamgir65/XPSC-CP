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
    int n; cin>>n;
    string a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> s[n+1];
    for(int i=1;i<=n;i++){
        s[i].insert(i);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='1'){
                s[j+1].insert(i+1);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<s[i].size()<<" ";
        for(auto val:s[i]){
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