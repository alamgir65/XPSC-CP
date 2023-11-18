// problem link: https://codeforces.com/problemset/problem/1702/A
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int digit=0;
        int m=n;
        while(n>0){
            digit++;
            n=n/10;
        }
        digit--;
        int x=1;
        while(digit--){
            x=x*10;
        }
        cout<<(m-x)<<endl;
    }
    return 0;
}