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
bool cheak(vector<int> v,int n){
    for(int i=0;i<n;i++){
        if(i==0){
            if(v[0]<v[n-1] && v[0]<v[1]) continue;
            if(v[0]>v[n-1] && v[0]>v[1]) continue;
            return false;
        }
        else if(i==n-1){
            if(v[n-1]<v[0] && v[n-1]<v[n-2]) continue;
            if(v[n-1]>v[0] && v[n-1]>v[n-2]) continue;
            return false;
        }
        if(v[i]<v[i+1] && v[i]<v[i-1]) continue;
        if(v[i]>v[i+1] && v[i]>v[i-1]) continue;
        return false;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    vii x1(n),x2(n);
    int j=0;
    for(int i=0;i<n;i++){
        if(j>=n) j=1;
        x1[j]=a[i];
        j+=2;
    }
    j=1;
    for(int i=0;i<n;i++){
        if(j>=n) j=0;
        x2[j]=a[i];
        j+=2;
    }
    vii ans;
    if(cheak(x1,n)){
        ans=x1;
    }
    else if(cheak(x2,n)){
        ans=x2;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout <<endl;

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