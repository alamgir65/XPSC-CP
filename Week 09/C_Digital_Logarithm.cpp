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
using namespace std;\
int len(int x){
    int cnt=0;
    while(x!=0){
        cnt++;
        x/=10;
    }
    return cnt;
}
void solve(){
    int n; cin>>n;
    vii a(n),b(n);
    priority_queue<int> pqA,pqB;
    for(int i=0;i<n;i++){
         cin>>a[i];
        pqA.push(a[i]);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        pqB.push(b[i]);
    }
    int operation=0;
    while(!pqA.empty() && !pqB.empty()){
        int x=pqA.top();
        int y=pqB.top();
        if(x==y){
            pqA.pop();
            pqB.pop();
            
        }
        else if(x>y){
            pqA.pop();
            pqA.push(len(x));
            operation++;
        }
        else{
            pqB.pop();
            pqB.push(len(y));
            operation++;
        }
    }
    cout<<operation<<endl;
    

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