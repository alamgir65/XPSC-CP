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
    ll n,p,l,t; cin>>n>>p>>l>>t;
    int cnt=0;
    for(int i=1;i<=n;i+=7){
        cnt++;
    }
    ll ans=0;
    if(t>l){
        if((cnt*t)>=p){
            ans = cnt/2 + (cnt%2);
            ll x=p/(2*t);
            if(p%(2*t)!=0){
                if(cnt%2!=0){
                    if((p%(2*t))<=(t+l)){
                        x++;
                    }
                    else{
                        x+=2;
                    }
                }
                else{
                    if((p%(2*t))<=(2*l)){
                        x++;
                    }
                    else{
                        x+=2;
                    }
                }
            }
            ans=min(ans,x);
        }
        else{
            //ll x=p-(cnt*t);
            ll sum=cnt*t;
            ans= cnt/2;
            if(cnt%2!=0){
                ans++;
                sum+=l;
            }
            while(sum<p){
                sum += 2*l;
                ans++;
            }

        }
        cout<<(n-ans)<<endl;
    }
    else{
        ll sum=0;
        while(sum<p){
            sum += 2*l;
            ans++;
        }
        cout<<(n-ans)<<endl;
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