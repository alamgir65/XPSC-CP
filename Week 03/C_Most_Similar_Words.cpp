#include<bits/stdc++.h>
using namespace std;
int fun(string s1,string s2){
    int cnt=0;
    for(int i=0;i<s1.size();i++){
        cnt+=abs(s1[i]-s2[i]);
    }
    return cnt;
}
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> v;
        for(int i=0;i<n;i++){
            string s; cin>>s;
            v.push_back(s);
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=min(ans,fun(v[i],v[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}