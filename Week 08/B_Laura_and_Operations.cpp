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
    int A,B,C; cin>>A>>B>>C;
    if((A+min(B,C))>((B+C)-min(B,C))/2 && (((B+C)-min(B,C))/2)%2==0){
        cout<<1<<" ";
    }
    else{
        cout<<0<<" ";
    }
    if((B+min(A,C))>((A+C)-min(A,C))/2 && (((A+C)-min(A,C))/2)%2==0){
        cout<<1<<" ";
    }
    else{
        cout<<0<<" ";
    }
    if((C+min(B,A))>((B+A)-min(B,A))/2 && (((B+A)-min(B,A))/2)%2==0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
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