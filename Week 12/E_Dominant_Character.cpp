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
    int n; cin>>n;
    string s; cin>>s;
    if(s.find("aa")!= s.npos){
        cout<<2<<endl;
    }
    else if(s.find("aba") != s.npos){
        cout<<3<<endl;
    }
    else if(s.find("aca") != s.npos){
        cout<<3<<endl;
    }
    else if(s.find("abca") != s.npos){
        cout<<4<<endl;
    }
    else if(s.find("acba") != s.npos){
        cout<<4<<endl;
    }
    else if(s.find("abbacca") != s.npos) cout<<7<<endl;
    else if(s.find("accabba") != s.npos) cout<<7<<endl;
    else{
        cout<< -1 <<endl;
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