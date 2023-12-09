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
    vii a(n+1);
    map<int,vector<int>> idx;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        idx[a[i]].pb(i);
    }
    bool imp=false;
    for(int i=1;i<=n;i++){
        if(idx[i].size()>2){
            imp=true;
            break;
        }
    }
    if(imp){
        cout<<"NO"<<endl;
        return;
    }
    vii p(n+1,-1),q(n+1,-1);
    multiset<int> tmpP,tmpQ;
    for(int i=1;i<=n;i++){
        tmpP.insert(i);
        tmpQ.insert(i);
    }
    for(int i=1;i<=n;i++){
        if(idx[i].size()==0) continue;
        if(idx[i].size()==1){
            p[idx[i][0]]=i;
            tmpP.erase(tmpP.find(i));
        }
        else if(idx[i].size()==2){
            p[idx[i][0]]=i;
            tmpP.erase(tmpP.find(i));

            q[idx[i][1]]=i;
            tmpQ.erase(tmpQ.find(i));
        }
    }

    for(int i=1;i<=n;i++){
        if(p[i]==-1 && q[i]==-1){
            auto px=tmpP.end();
            px--;
            p[i]=*px;
            tmpP.erase(px);
            auto qx=tmpQ.end();
            qx--;
            q[i]=*qx;
            tmpQ.erase(qx);
        }
        else if(p[i]==-1){
            if(tmpP.empty()){
                imp=true;
                break;
            }
            auto x=tmpP.upper_bound(q[i]);
            if(tmpP.begin()==x){
                imp=true;
                break;
            }
            x--;
            p[i]=*x;
            tmpP.erase(x);
        }
        else if(q[i]==-1){
            if(tmpQ.empty()){
                imp=true;
                break;
            }
            auto x=tmpQ.upper_bound(p[i]);
            if(tmpQ.begin()==x){
                imp=true;
                break;
            }
            x--;
            q[i]=*x;
            tmpQ.erase(x);
        }
    }
    if(imp){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;

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