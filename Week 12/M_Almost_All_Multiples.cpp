#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n,x; cin>>n>>x;
    if(n%x != 0){
        out(-1)
        return;
    }
    if(n==x){
        cout<<x<<" ";
        for(int i=2;i<n;i++){
            cout<<i<<" ";
        }
        cout<<1<<endl;
        return;
    }
    //int last=n;
    int a[n+1];
    a[1]=x;
    a[n]=1;
    //int idx=x;
    for(int i=2;i<n;i++) a[i]=i;
    a[x]=n;
    //bool flag=true;
    for(int i=x;i<n;i+=x){
        if(i%x==0 && n%i==0){
            swap(a[i],a[x]);
            x=i;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}