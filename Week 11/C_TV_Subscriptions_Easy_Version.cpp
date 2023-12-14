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
    int  n,k,d; cin>>n>>k>>d;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int mn=imax;
    for(int i=0;i<(n-d+1);i++){
        set<int> st;
        for(int j=i;j<i+d;j++){
            st.insert(a[j]);
        }
        if((st.size())<mn){
            mn=st.size();
        }
    }
    cout<<mn<<endl;
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