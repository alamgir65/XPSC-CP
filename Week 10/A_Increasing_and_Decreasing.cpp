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
    int x,y,n; cin>>x>>y>>n;
    if((y-x)<(n-2)){
        cout<<-1<<endl;
        return;
    }
    cout<<x<<" ";
    x++;
    for(int i=1;i<n-1;i++){
        cout<<x<<" ";
        x++;
    }
    cout<<y<<endl;
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