// problem link: https://codeforces.com/problemset/problem/1790/D
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
        int ans=0;
        sort(a,a+n);
        reverse(a,a+n);
        vector<pair<int,int>> b;
        int j;
        for(int i=0;i<n;){
            j=i;
            while(i<n && a[i]==a[j]){
                i++;
            }
            b.push_back({a[j],i-j});
        }
        ans=b[0].second;
        int m=b.size();
        for(int i=1;i<m;i++){
            if(b[i].first +1 ==b[i-1].first){
                ans+= max(0,b[i].second-b[i-1].second);
            }
            else{
                ans+=b[i].second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}