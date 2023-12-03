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
bool possible(vector<int> a,int n,int k){
    multiset<int> s;
    for(auto i:a) s.insert(i);
    for(int i=1;i<=k;i++){
        int x=k-i+1;
        if(s.empty()) return false;
        auto ii=s.upper_bound(x);
        if(ii==s.begin()) return false;
        ii--;
        s.erase(ii);
        if(!s.empty()){
            ii=s.begin();
            int v=(*ii);
            v+=x;
            s.erase(ii);
            s.insert(v);
        }
    }
    return true;
}
void solve(){
    int  n; cin>>n;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    int l=0,r=n;
    while(l<=r){
        int mid=(l+r)/2;
        if(possible(a,n,mid)){
            k=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<k<<endl;
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