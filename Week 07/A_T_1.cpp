#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){
    return __gcd(a,b);
}
ll lcm(ll a,ll b){
    return ((a/(gcd(a,b)))*b);
}
int main()
{   
    ll n,a,b,p,q; cin>>n>>a>>b>>p>>q;
    ll ans=0;
    ll LCM=lcm(a,b);
    ll same=n/LCM;

    ans += (n/a * p);
    ans += (n/b * q);
    ans -= (same * (p+q));
    ans += (same * max(p,q));

    cout<<ans<<endl;
    return 0;
}