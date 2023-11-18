// problem link: https://codeforces.com/problemset/problem/1843/B
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+= abs(a[i]);
        }
        int cnt=0;
        bool flag=false;
        for(int i=0;i<=n;i++){
            if(flag){
                if(i==n || a[i]>0){
                    cnt++;
                    flag=false;
                }
            }
            else{
                if(a[i]<0) flag=true;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}