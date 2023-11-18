/***problem link: https://codeforces.com/problemset/problem/1800/D
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
            string x=s;
            x.erase(i,2);
            st.insert(x);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
***/
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;
        long long ans=n-1;
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+2]){
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}