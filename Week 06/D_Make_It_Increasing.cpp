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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]!=0 and a[i]>=a[i+1]){
            a[i]/=2;
            cnt++;
        }
        if(a[i]>=a[i+1] or (a[i]==0 and i>0)){
            cnt=-1;
            break;
        }
    }
    
    cout<<cnt<<endl;
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