//problem link: https://codeforces.com/problemset/problem/1741/B
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int i=0,j=0;
        int a[n+1];
        if(n==3){
            cout<<-1<<endl;
            continue;
        }
        else if(n==5){
            cout<<"5 4 1 2 3"<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            a[i]=n-i+1;
        }
        if(n%2!=0){
            swap(a[n/2],a[(n/2)+1]);
        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}