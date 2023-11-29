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
    ll n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;
    if(count(s.begin(),s.end(),c)==n) cout<<0<<endl;
    else{
        for(int i=n/2;i<n;i++){
            if(s[i]==c){
                cout<<1<<endl;
                cout<<i+1<<endl;
                return;
            }
        }
        cout<<2<<endl;
        cout<<n<<" "<<n-1<<endl;
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