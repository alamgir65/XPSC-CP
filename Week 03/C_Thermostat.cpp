// problem link: https://codeforces.com/problemset/problem/1759/C
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int l,r,x; cin>>l>>r>>x;
        int a,b; cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(abs(b-a)>=x){
            cout<<1<<endl;
        }
        else if(a<b){
            if((b-a)>=x) cout<<1<<endl;
            else if(r-b>=x || a-l>=x) cout<<2<<endl;
            else if(r-a>=x && b-l>=x) cout<<3<<endl;
            else cout<<-1<<endl;
        }
        else{
            if(a-b >= x) cout<<1<<endl;
            else if(r-a>=x && b-l>=x) cout<<2<<endl;
            else if(r - b >= x && a - l >= x) cout<<3<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}