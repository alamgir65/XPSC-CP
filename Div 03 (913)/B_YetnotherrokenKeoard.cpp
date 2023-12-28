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
    string s,ans; cin>>s;
    int b=0,B=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='b') b++;
        else if(s[i]=='B') B++;
        else if(s[i]<97){
            if(B>0){
                B--;
            }
            else{
                ans+=s[i];
            }
        }
        else{
            if(b>0){
                b--;
            }
            else{
                ans+=s[i];
            }
        }
    }
    reverse(all(ans));
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