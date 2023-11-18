//problem link: https://codeforces.com/problemset/problem/1744/B
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        long long s=0;
        int a[n];
        int even_cnt=0,odd_cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) even_cnt++;
            else odd_cnt++;
            s+=a[i];
        }

        while(q--){
            int type,x; cin>>type>>x;
            long long sum=0;
            if(type==0){
                s+=(x*even_cnt);
                if(x%2!=0){
                    odd_cnt+=even_cnt;
                    even_cnt=0;
                }
            }
            else if(type==1){
                s+=(x*odd_cnt);
                if(x%2!=0){
                    even_cnt+=odd_cnt;
                    odd_cnt=0;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}