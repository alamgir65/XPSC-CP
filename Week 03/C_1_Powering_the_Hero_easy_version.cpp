// problem link: https://codeforces.com/problemset/problem/1800/C1
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
        priority_queue<int> st;
        long long ans=0;
        for(int i=0;i<n;i++){
            st.push(a[i]);
            if(a[i]==0 && !st.empty()){
                ans+=st.top();
                st.pop();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}