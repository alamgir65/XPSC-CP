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
double getDistance(int ax,int ay,int bx,int by){
    return sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
}
bool inSide(int ax,int ay,int bx,int by,double r){
    double d=getDistance(ax,ay,bx,by);
    return (r-d)>1e-15;
}
void solve(){
    int px,py; cin>>px,py;
    int ax,ay; cin>>ax>>ay;
    int bx,by; cin>>bx>>by;

    double l=0.0,r=INT_MAX*1.0;
    double ans;
    while((r-l)>1e-15){
        double radious=l+(r-l)/2;
        if(inSide(ax,ay,0,0,radious) && inSide(ax,ay,px,py,radious)){
            ans=radious;
            r=radious;
        }
        else if(inSide(bx,by,0,0,radious) && inSide(bx,by,px,py,radious)){
            ans=radious;
            r=radious;
        }
        else if(inSide(ax,ay,0,0,radious) && inSide(bx,by,px,px,radious) && ((2*radious)-getDistance(ax,ay,bx,by))>1e-15){
            ans=radious;
            r=radious;
        }
        else if(inSide(bx,by,0,0,radious) && inSide(ax,ay,px,px,radious) && ((2*radious)-getDistance(ax,ay,bx,by))>1e-15){
            ans=radious;
            r=radious;
        }
        else{
            l=radious;
        }
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
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