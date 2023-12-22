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
    string s; cin>>s;
    string l="";
    string tmp="";
    bool flag=false;
    for(int i=0;i<s.size()-1;i++){
        tmp+=s[i];
        for(int j=i+1;j<s.size();j++){
            l+=s[j];
        }
        int x=stoi(tmp);
        int y=stoi(l);
        if(x<y && l[0]!='0'){
            cout<<tmp<<" "<<l<<endl;
            flag=true;
            break;
        }
        l="";
    }
    if(!flag){
        cout<<-1<<endl;
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