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
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    vii ans;
    while(a[0] != a.back())
    {
        int x = 0;
        if(a[0]%2==0 && a.back()%2==0)
        {
            ans.push_back(0);
            x = 0;
        }
        else if(a[0]%2==0 && a.back()%2==1)
        {
            ans.push_back(0);
            x = 0;
        }
        else if(a[0]%2==1 && a.back()%2==0)
        {
            ans.push_back(1);
            x = 1;
        }
        else if(a[0]%2==1 && a.back()%2==1)
        {
            ans.push_back(0);
            x = 0;
        }
        a[0] = (a[0] + x) / 2;
        a.back() = (a.back() + x) / 2;
    }
    cout<<ans.size()<<"\n";
    if(ans.size()<=n)
    {
        for(int i:ans)
            cout<<i<<" ";
        cout<<"\n";
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