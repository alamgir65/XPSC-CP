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
    int n;
    cin >> n;
    ll sum = 0, first = imax, second = imax;
    while(n--){
        int m;
        cin >> m;
        vll v(m);
        for(int i = 0; i < m; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        sum += v[1];
        first = min(first, v[0]);
        second = min(second, v[1]); 
    }
    cout << sum + first - second << endl;
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