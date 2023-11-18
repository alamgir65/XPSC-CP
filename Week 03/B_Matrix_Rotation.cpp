// problem link: https://codeforces.com/problemset/problem/1772/B
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        if((a < b && c > d) || (a > b && c < d) || (a > c && b < d) || (a < c && b > d)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}