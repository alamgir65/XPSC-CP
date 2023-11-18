#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        //cin.ignore();
        string s;
        cin>>s;
        vector<int> ans;
        int cnt=0;
        int ar1[n+1];
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                cnt += (n-1-i);
                ar1[i]=(n-1-i);
            }
            else{
                cnt += i;
                ar1[i]=i;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                int x=(n-1-i);
                if(ar1[i]<x){
                    v.push_back(x-ar1[i]);
                }
            }
            else{
                int x=i;
                if(ar1[i]<x){
                    v.push_back(x-ar1[i]);
                }
            }
        }
        if(!v.empty()){
            sort(v.begin(),v.end());
        }
        int a[v.size()];
        if(!v.empty()) a[0]=v[0];
        for(int i=1;i<v.size();i++){
            a[i]=a[i-1]+v[i];
        }
        for(int i=0;i<n;i++){
            if(i>=v.size()){
                ans.push_back(cnt+a[v.size()-1]);
            }
            else{
                ans.push_back(a[i]+cnt);
            }
        }
        if(n==1){
            cout<<0<<endl;
        }
        else{
            for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}