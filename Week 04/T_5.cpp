#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
vector<ll> palindroms;
void palidrom(){
    ll mx=1<<15;
    for(int i=0;i<mx;i++){
        string s=to_string(i);
        string s1=s;
        reverse(s.begin(),s.end());
        if(s==s1) palindroms.push_back(i);
    }
}
void solve(){
	ll n; cin>>n;
	ll a[n];
	unordered_map<ll,ll> mp;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    mp[a[i]]++;
	}
	ll ans=0;
	for(int i=0;i<n;i++){
	    for(int j=0;j<palindroms.size();j++){
	        if((a[i]^palindroms[j])<=a[i]) continue;
	        if(mp.find(a[i]^palindroms[j]) != mp.end()){
	            ans += mp[a[i]^palindroms[j]];
	        }
	    }
	}
	for(auto it:mp){
	    ans+= (ll) it.second * (it.second+1) /2;
	}
	cout<<ans<<endl;
}
int main(){
	Alamgir
	palidrom();
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;    
}