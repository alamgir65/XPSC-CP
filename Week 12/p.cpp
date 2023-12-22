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
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,r=imax;
    int ans=-1;
    while(l<=r){
        ll mid=(l+r)/2;
        int flag=0;
        for(int i=0;i<n-1;i++){
            if((abs(a[i]-mid))>(abs(a[i+1]-mid))){
                if(a[i]>a[i+1]){
                    flag=1;
                }
                else{
                    flag=2;
                }
                break;
            }
        }
        if(flag==1){
            l=mid+1;
        }
        else if(flag==2){
            r=mid-1;
        }
        else{
            ans=mid;  // Update ans when flag is neither 1 nor 2
            break;    // Add break to exit the loop once ans is found
        }
    }
    cout<< ans <<endl;
}

love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}
