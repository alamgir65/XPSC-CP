#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        int x,y; cin>>x>>y;
        int dog=(x-a);
        int cat=(y-b);
        int need=0;
        if(dog>0) need+=dog;
        if(cat>0) need+=cat;
        if(c>=need) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}