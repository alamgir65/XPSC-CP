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
bool isSorted(int a[],int b[],int n){
    sort(b,b+n);
    return b==a;
}
void solve(){
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    int x=0;
    int mn=imax;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(a[i]<mn){
            mn=a[i];
            x=i;
        }
        mp[a[i]]++;
    }
    cout<<x<<endl;
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