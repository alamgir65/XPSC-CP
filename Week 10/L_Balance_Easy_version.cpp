#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    map<ll,ll> mex;
    map<ll,bool> visited;
    ll q; cin>>q;
    while(q--){
        char op; cin>>op;
        ll x; cin>>x;
        if(op=='+'){
            visited[x]=true;
        }
        else{
            ll v=mex[x]+x;
            while(visited[v]){
                mex[x]=v;
                v += x;
            }
            cout<<v<<endl;
        }
    }
    return 0;
}