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
bool ok(vector<int> a,vector<int> b,int n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    vii a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            flag=false;
            break;
        }
        else if(a[i]<b[i]){
            if(b[i]-1 > b[(i+1)%n]){
                flag=false;
                break;
            }
        }
    }
    if(flag) yes
    else no
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