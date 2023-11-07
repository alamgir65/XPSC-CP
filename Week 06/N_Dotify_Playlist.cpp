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
    int n,k,l; cin>>n>>k>>l;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        if(b==l){
            v.push_back(a);
        }
    }
    sort(v.rbegin(),v.rend());
    ll sum=0;
    for(int i=0;i<v.size();i++){
        if(k>0){
            sum+=v[i];
            k--;
        }
    }
    if(sum==0 || k!=0){
        cout<<-1<<endl;
    }
    else{
        cout<<sum<<endl;
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