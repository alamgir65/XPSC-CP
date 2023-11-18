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
    ll n; cin>>n;
    vll v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll sum=0;
    ll count=0;
    //map<ll,ll> mp;
    map<ll,int>mp;
    int j=0;
    mp[0]++;
    while(j<n){
        sum += v[j]%n;
        sum=(sum+n)%n;
        count += mp[sum];
        mp[sum]++;
        j++;
    }
        
    cout << count << '\n';
}
int main(){
    Alamgir
    solve();
    return 0;    
}