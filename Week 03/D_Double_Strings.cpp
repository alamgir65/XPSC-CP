#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cin.ignore();
        vector<string> v;
        map<string,int> mp;
        string ans(n,'0');
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
            mp[s]++;
        }
        for(int i=0;i<n;i++){
            if(v[i].size()==1) continue;
            for(int j=0;j<v[i].size()-1;j++){
                string x="";
                string y="";
                for(int k=0;k<=j;k++){
                    x.push_back(v[i][k]);
                }
                for(int k=j+1;k<v[i].size();k++){
                    y.push_back(v[i][k]);
                }
                if(x==y){
                    if(mp[x]>0) ans[i]='1';
                }
                else{
                    if(mp[x]>0 && mp[y]>0) ans[i]='1';
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}