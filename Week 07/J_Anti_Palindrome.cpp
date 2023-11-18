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
    int frq[26]={0};
    for(char c:s){
        frq[c-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(frq[i]>0){
            cnt++;
        }
    }
    bool palindrome=false;
    if(n%2==0){
        bool p=true;
        for(int i=0;i<26;i++){
            if(frq[i]%2 != 0){
                p=false;
            }
        }
        if(p){
            palindrome=true;
        }
    }
    else{
        int odd=0;
        for(int i=0;i<26;i++){
            if(frq[i]%2!=0){
                odd++;
            }
        }
        if(odd==1){
            palindrome=true;
        }
    }

    if(cnt==1){
        if(n%2==0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else if(palindrome) cout<<1<<endl;
    else cout<<0<<endl;
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