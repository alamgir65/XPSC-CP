
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
        string s; cin>>s;
        map<int,char> mp;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(mp.find(a[i])!=mp.end() && mp[a[i]]!=s[i]){
                flag=false;
            }
            else{
                mp[a[i]]=s[i];
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}