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
    int flag=0;
    vii v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.pb(x);
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    else{
        int size=1;
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i] && flag!=1){
                size++;
                flag=1;
            }
            else if(v[i-1]<v[i] && flag!=-1){
                size++;
                flag=-1;
            }
        }
        cout<<size<<endl;
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