#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    ll  n,m; cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=INT_MAX;
    ll ans;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(a[i]>mid){
                sum+=(a[i]-mid);
            }
        }
        if(sum>=m){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}