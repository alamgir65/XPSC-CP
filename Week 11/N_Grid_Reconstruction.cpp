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
    int a[2][n+1];
    a[0][1]=2*n;
    a[1][n]=(2*n) -1;
    int cur=1;
    for(int i=1;i<=n;i++){
        a[i%2][i]=cur;
        cur++;
    }
    cur=(2*n) -2;
    for(int i=3;i<=n;i+=2){
        a[0][i]=cur;
        a[1][i-1]=cur-1;
        cur-=2;
    }
    for(int i=0;i<2;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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