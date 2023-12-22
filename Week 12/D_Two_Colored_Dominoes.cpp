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
    int n,m; cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n-1;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='U'){
                if(cnt%2){
                    s[i][j]='B';
                    s[i+1][j]='W';
                }
                else{
                    s[i][j]='W';
                    s[i+1][j]='B';
                }
                cnt++;
            }
        }
    }
    for(int j=0;j<m-1;j++){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i][j]=='L'){
                if(cnt%2){
                    s[i][j]='B';
                    s[i][j+1]='W';
                }
                else{
                    s[i][j]='W';
                    s[i][j+1]='B';
                }
                cnt++;
            }
        }
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        int w=0,b=0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='W') w++;
            else if(s[i][j]=='B') b++;
        }
        if(w!=b){
            flag=false;
            break;
        }
    }
    for(int j=0;j<m;j++){
        int w=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i][j]=='W') w++;
            else if(s[i][j]=='B') b++;
        }
        if(w!=b){
            flag=false;
            break;
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }
    else{
        for(auto st:s){
            cout<<st<<endl;
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