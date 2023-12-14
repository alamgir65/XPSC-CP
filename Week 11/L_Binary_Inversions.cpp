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
ll cnt(vector<int> a, int n){
    ll one=0;
    ll count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) one++;
        else count += one;
    }
    return count;
}
void solve(){
    int n; cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll  ans=cnt(a,n);
    int flag=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            flag=i;
            break;
        }
    }
    if((cnt(a,n))>ans) ans=cnt(a,n);
    
    if(flag != -1){
        a[flag]=0;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
            break;
        }
    }
    if((cnt(a,n))>ans) ans=cnt(a,n);
    cout<<ans<<endl;
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