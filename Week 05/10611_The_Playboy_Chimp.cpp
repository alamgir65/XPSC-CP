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
    
}
int main(){
    Alamgir
    int n; cin >> n;
    vector<ll>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int q; cin >> q;
    while (q--) {
        ll x; cin >> x;
        ll ans1 = -1, ans2 = -1;

        auto it = upper_bound(v.begin(), v.end(), x);
        auto it2 = lower_bound(v.begin(), v.end(), x); 

        if (it != v.end()) {         
            ans2 = *it;
        }

        if (it2 != v.begin()) { 
            it2--;        
            ans1 = *it2;
        }
        
        if(ans1!= -1 && ans2!= -1) cout<<ans1<<" "<<ans2<<endl;
        else if(ans1 != -1 && ans2==-1) cout<<ans1<<" "<<'X'<<endl;
        else if(ans1==-1 && ans2!=-1) cout<<'X'<<" "<<ans2<<endl;
        else cout<<'X'<<" "<<'X'<<endl;

        }
    return 0;    
}