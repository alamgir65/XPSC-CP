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
    string s; cin>>s;
    int ans=1e9;
    for(int i='a';i<='z';i++){
        int cnt=0;
        int l=0,r=n-1;
        while(l<=r){
            if(s[l]!=s[r]){
                if(s[l]==i){
                    cnt++;
                    l++;
                }
                else if(s[r]==i){
                    cnt++;
                    r--;
                }
                else{
                    cnt=1e9;
                    break;
                }
            }
            else{
                l++;
                r--;
            }
            
        }
        ans=min(ans,cnt);
        
    }
    if(ans==1e9) cout<<-1<<endl;
    else cout<<ans<<endl;
    
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