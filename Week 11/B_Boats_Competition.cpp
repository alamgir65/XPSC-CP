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
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int high=2*n + 1;
    int res=0;
    for(int k=1;k<=high;k++){
        int i=0,j=n-1,cnt=0;
        while(i<j){
            int sum=a[i]+a[j];
            if(sum==k){
                cnt++;
                i++;
                j--;
            }
            else if(k < sum){
                j--;
            }
            else{
                i++;
            }
            res=max(res,cnt);
        }
    }
    cout<< res <<endl;
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