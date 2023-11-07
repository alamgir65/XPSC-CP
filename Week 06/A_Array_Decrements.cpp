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
    vii a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    bool flag=true;
    int diff=-1,z_diff=-1;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            flag=false;
            break;
        }
        if(b[i]!=0){
            if(diff==-1){
                diff=a[i]-b[i];
            }
            else{
                if(a[i]-b[i] != diff){
                    flag=false;
                    break;
                }
            }
        }
        else{
            z_diff=max(z_diff,a[i]-b[i]);
        }
    }
    if(flag){
        if(diff==-1 || z_diff<=diff){
            yes
        }
        else no
    }
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