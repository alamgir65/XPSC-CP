#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    int mx=1000000;
    int mn=1;
    int mid=mx/2;
    vector<int> v1,v2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=mid) v1.push_back(a[i]);
        else v2.push_back(a[i]);
    }
    int l=-1,r=-1;
    if(!v1.empty()){
        l=v1[v1.size()-1];
    }
    if(!v2.empty()){
        r=v2[0];
    }
    int ans=0;
    if(l!=-1){
        ans=l-1;
    }
    if(r != -1){
        ans = max(ans,(mx-r));
    }
    cout<< ans << endl;
    return 0;
}