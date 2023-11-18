// problem link: https://codeforces.com/problemset/problem/1741/A
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        string s,ss;
        cin>>s>>ss;
        int n=s.size();
        int m=ss.size();
        char a=s.back(),b=ss.back();
        if(a==b){
            if(n==m) cout<<"="<<endl;
            else if(a=='S'){
                if(n<m) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            else{
                if(n>m) cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
        }
        else{
            if(a<b) cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
    }
    return 0;
}