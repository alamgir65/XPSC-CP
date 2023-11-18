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
    int a,b,c; cin>>a>>b>>c;
    int elevator1=(a-1);
    int elevator2=abs(c-b)+abs(c-1);
    if(elevator1<elevator2) cout<<1<<endl;
    else if(elevator2<elevator1) cout<<2<<endl;
    else cout<<3<<endl;
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