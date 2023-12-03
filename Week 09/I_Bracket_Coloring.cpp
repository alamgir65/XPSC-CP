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
    stack<int> st;
    int cnt=0;
    vii v(n,2);
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    if(cnt!=0){
        cout<<-1<<endl;
        return;
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            if(st.empty()){
                flag=false;
                continue;
            }
            v[i]=1;
            v[st.top()]=1;
            st.pop();
        }
    }
    if(!flag){
        while(!st.empty()) st.pop();
        v.assign(n,2);
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                st.push(i);
            }
            else{
                if(st.empty()){
                    flag=false;
                    continue;
                }
                v[i]=1;
                v[st.top()]=1;
                st.pop();
            }
        }
    }
    int colours=*max_element(all(v));
    cout<<colours<<endl;
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
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