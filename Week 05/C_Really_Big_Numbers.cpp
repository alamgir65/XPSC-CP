#include<bits/stdc++.h>
#define ll long long
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
bool bigNum(ll n,ll s){
    ll sum=0;
    ll x=n;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return (x-sum) >= s;
}
int main(){
    Alamgir
    ll n,s; cin>>n>>s;
    ll l=1,r=n,ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(bigNum(mid,s)){
            ans=max(ans,n - mid+1);
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;    
}