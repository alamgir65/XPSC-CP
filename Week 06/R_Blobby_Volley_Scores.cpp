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
    int a=0,b=0;
    char c='A';
    for(int i=0;i<n;i++){
        if(c=='A' && s[i]==c){
            a++;
        }
        else if(c=='A' && s[i]=='B'){
            c='B';
        }
        else if(c=='B' && s[i]=='B'){
            b++;
        }
        else if(c=='B' && s[i]=='A'){
            c='A';
        }
    }
    cout<<a<<" "<<b<<endl;
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