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
    int b;
    char a; cin>>a>>b;
    for(int i=1;i<=8;i++){
        for(char j='a';j<='h';j++){
            if(j==a){
                if(i!=b){
                    cout<<j<<i<<endl;
                }
            }
            if(i==b){
                if(j!=a){
                    cout<<j<<i<<endl;
                }
            }
        }
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