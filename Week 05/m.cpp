#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    ll n,m,h; cin>>n>>m>>h;
	    vector<ll> a(n);
	    vector<ll> b(m);
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<m;i++) cin>>b[i];
	    sort(a.begin(),a.end(),greater<ll>());
	    sort(b.begin(),b.end(),greater<ll>());
	    ll ans=0;
	    for(int i=0;i<min(n,m);i++){
	        ans+=min(a[i],b[i]*h);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
