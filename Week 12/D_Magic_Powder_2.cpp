#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=2e9+5,N=1e5+5;
ll n,k;
ll a[N],b[N];
bool ok(ll mid){
    ll tm=k;
    for(ll i=0;i<n;i++){
        ll d=(a[i]*mid-b[i]);
        if(d>0){
            tm-=d;
        }
        if(tm<0) return false;
    }
    return true;
}
int main()
{   
    cin>>n>>k;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll l=0,r=M;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<< ans <<endl;
    return 0;
}