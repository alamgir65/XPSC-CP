#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   
    ll n,k; cin>>n>>k;
    ll a[n];
    ll b[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    int l=0,r=INT_MAX;
    ll ans=0;
    while(l<=r){
        ll mid=(l+r)/2;
        ll sum=0;
        for(ll i=0;i<n;i++){
            if((a[i]*mid-b[i])>0){
                sum += (a[i]*mid - b[i]);
            }
        }
        if(sum <= k){
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