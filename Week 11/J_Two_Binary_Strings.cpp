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
    string a,b; cin>>a>>b;
    bool flag=false;
    for(int i=0;i<a.size();i++){
        if((a[i]=='0' && b[i]=='0') && (a[i+1]=='1' && b[i+1]=='1')){
            flag=true;
            break;
        }
    }
    if(flag) yes
    else no
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