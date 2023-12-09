#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
    int n; cin>>n;
    int a[n];
    int mx=INT_MIN;
    int GCD=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=mx-a[i];
        GCD=__gcd(GCD,v[i]);
    }
    ll ans=0;
    for(int val:v){
        ans += val/GCD;
    }
    cout<<ans<<" "<<GCD<<endl;

}