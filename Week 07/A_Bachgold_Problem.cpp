#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    vector<int> ans;
    if(n%2!=0){
        ans.push_back(3);
        n-=3;
    }
    while(n>0){
        ans.push_back(2);
        n-=2;
    }
    cout<<ans.size()<<endl;
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;
}