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
    int a=-1,b=-1,c=-1,flag=0;
    for(int i=2;i*i <= n;i++){
        if(n%i==0){
            for(int j=2;j*j<=i;j++){
                if(i%j==0 && i!=(i/j)){
                    a=n/i;
                    b=j;
                    c=i/j;
                    if(a!=b && a!=c && b!=c){
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag) break;
        if(n%i==0 && i!=n/i){
            for(int j=2;j*j<=(n/i);j++){
                if((n/i)%j==0){
                    a=i,b=j,c=(n/i)/j;
                    if(a!=b && a!=c && b!=c){
                        flag=1;
                        break;
                    }
                }

            }
        }
    }
    if(flag==0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return;
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