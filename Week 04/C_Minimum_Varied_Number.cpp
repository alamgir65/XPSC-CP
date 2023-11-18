// prolem link: https://codeforces.com/problemset/problem/1714/C
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        for(int i=9;i>=1;i--){
            if(n>=i){
                s=char('0'+i)+s;
                n-=i;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}