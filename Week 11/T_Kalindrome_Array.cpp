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
bool isPalindrome(vector<int> v,int n){
    bool flag=true;
    int i=0,j=n-1;
    while(i<j){
        if(v[i] != v[j]) return false;
        i++;
        j--;
    }
    return true;
}
void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    bool flag=true;
    int i=0,j=n-1,x,y;
    while(i<j){
        if(a[i] != a[j]){
            flag=false;
            x=a[i];
            y=a[j];
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"YES"<<endl;
        return;
    }
    
    vii v1,v2;
    for(int i=0;i<n;i++){
        if(a[i]!=x) v1.pb(a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=y) v2.pb(a[i]);
    }
    if(isPalindrome(v1,v1.size()) || isPalindrome(v2,v2.size())){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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