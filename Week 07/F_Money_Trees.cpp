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
    ll n, k;
	cin >> n >> k;
 
	ll arr[n];
	for(ll i=0;i<n;i++) cin>>arr[i];
 
	ll hei[n];
	for(ll i=0;i<n;i++) cin>>hei[i];
 
	ll curr = arr[0];
	ll ans = 0;
	ll i = 0;
	ll j = 1;
 
	if(curr <= k) ans = 1;
 
	while(j < n) {
		if(hei[j - 1] % hei[j] == 0) curr += arr[j];
		else {
			curr = arr[j];
			i = j;
		}
 
		while(curr > k) {
			curr -= arr[i++];
		}
 
		// cout << curr << " " << i << " " << j << nl;
 
		ans = max(ans, j - i + 1);
		j++;
 
	}
 
	cout << ans << endl;
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