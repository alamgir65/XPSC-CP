// problem link: https://codeforces.com/problemset/problem/1714/B
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int> mp;
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            mp[a[i]]++;
            if(mp[a[i]]>1) break;
            cnt++;
        }
        
        cout<<(n-cnt)<<endl;
    }
    return 0;
}