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
    int n,k; cin>>n>>k;
    int a[n];
    vii v,w;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0) w.pb(a[i]*-1);
        else if(a[i]>0) v.pb(a[i]);
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    ll x=0,y=0,ans=0;
    if(v.empty()==false){
        if(v.size()<k){
            x=v[v.size()-1];
            ans += x;
        }
        else{
            x=v[v.size()-1];
            for(int i=0;i<v.size();i++){
                if(i==v.size()-1){
                    ans += v[i];
                }
                else if((v.size()-i-1)%k==0){
                    ans += v[i]*2;
                }
            }
        }
    }

    if(w.empty()==false){
        if(w.size()<k){
            y=w[w.size()-1];
            ans += y;
        }
        else{
            y=w[w.size()-1];
            for(int i=0;i<w.size();i++){
                if(i==w.size()-1){
                    ans += w[i];
                }
                else if((w.size()-i-1)%k==0){
                    ans += w[i]*2;
                }
            }
        }
    }
    ans+= min(x,y);
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