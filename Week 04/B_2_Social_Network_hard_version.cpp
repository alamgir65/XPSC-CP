// problem link: https://codeforces.com/problemset/problem/1234/B2
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k; cin>>n>>k;
    int a[n];
    map<int,int> mp;
    deque<int> dq;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]>0) continue;
        if(dq.empty()){
            dq.push_back(a[i]);
            mp[a[i]]++;
        }
        else{
            if(dq.size()<k){
                dq.push_front(a[i]);
                mp[a[i]]++;
            }
            else{
                int x=dq.back();
                dq.pop_back();
                mp[x]--;
                dq.push_front(a[i]);
                mp[a[i]]++;
            }
        }
    }
    cout<<dq.size()<<endl;
    for(int val:dq){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}