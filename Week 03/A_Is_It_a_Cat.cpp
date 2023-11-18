// problem link: https://codeforces.com/problemset/problem/1800/A
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string s1="meow";
        for(auto& c:s){
            c=tolower(c);
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        if(s1==s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}