// problem link: https://codeforces.com/problemset/problem/1833/A
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        set<string> st;
        for(int i=0;i<n-1;i++){
            string tmp;
            tmp.push_back(s[i]);
            tmp.push_back(s[i+1]);
            st.insert(tmp);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}