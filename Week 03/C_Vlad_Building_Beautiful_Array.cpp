// problem link: https://codeforces.com/problemset/problem/1833/C
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int mn=INT_MAX;
        int odd_cnt=0,even_cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0) even_cnt++;
            else if(a[i]%2!=0) odd_cnt++;
            mn=min(mn,a[i]);
        }
        if(even_cnt==n) cout<<"YES"<<endl;
        else if(mn%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}