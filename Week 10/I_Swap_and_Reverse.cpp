#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    vector<char> odd,even;
    for(int i=0;i<n;i++){
        if(i%2==0){
            odd.push_back(s[i]);
        }
        else{
            even.push_back(s[i]);
        }
    }
    if(k%2==0){
        sort(all(s));
        cout<<s<<endl;
    }
    else{
        sort(all(odd));
        sort(all(even));
        int k=0,j=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<odd[k++];

            }
            else{
                cout<<even[j++];
            }
        }
        cout<<endl;
    }
    

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