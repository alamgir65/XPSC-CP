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
    int b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int cnt=0,mx=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            mx=max(mx,cnt);
            cnt=0;
        }
        else{
            cnt++;
        }
    }
    mx=max(mx,cnt);
    int mx2=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(b[i]==0){
            mx2=max(mx2,cnt2);
            cnt2=0;
        }
        else{
           cnt2++; 
        }
    }
    mx2=max(mx2,cnt2);
    //cout<<mx<<" "<<mx2<<endl;
    if(mx>mx2) cout<<"Om"<<endl;
    else if(mx<mx2) cout<<"Addy"<<endl;
    else cout<<"Draw"<<endl;
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