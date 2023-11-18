// problem link: https://codeforces.com/problemset/problem/1702/C
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]].push_back(i);
        }
        while(k--){
            int a,b; cin>>a>>b;
            if(mp[a].empty() || mp[b].empty()) cout<<"NO"<<endl;
            else if(a==b) cout<<"YES"<<endl;
            else if(mp[a].front() < mp[b].back()) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}