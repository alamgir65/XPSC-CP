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
    int  n,m; cin>>n>>m;
    if(n>m || (n%2==0 && m%2==1)){
        cout<<"No"<<endl;
        return;
    }
    int a[n];
    int sum=0;
    if(n%2==0 && m%2==0){
        for(int i=0;i<n-2;i++){
            a[i]=1;
            sum++;
        }
        a[n-2]=(m-sum)/2;
        a[n-1]=a[n-2];
    }
    else{
        for(int i=0;i<n-1;i++){
            a[i]=1;
            sum++;
        }
        a[n-1]=m-sum;
    }
    cout<<"Yes"<<endl;
    for(int val:a){
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