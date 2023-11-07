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
    int A=0,B=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            b++;
        }
        if(a==3){
            A++;
            a=0;
            b=0;
        }
        else if(b==3){
            B++;
            a=0;
            b=0;
        }
    }
    if(A>B) cout<<'A'<<endl;
    else if(A<B) cout<<'B'<<endl;
    else if(a>b) cout<<'A'<<endl;
    else if(a<b) cout<<'B'<<endl;
    else cout<<'?'<<endl;
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