#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        cout<<s-r<<" ";
        if(r%(n-1)==0){
            for(int i=0;i<n-1;i++){
                cout<<r/(n-1)<<" ";
            }
        }
        else{
            int tmp=r%(n-1);
            for(int i=0;i<n-1-tmp;i++){
                cout<<r/(n-1)<<" ";
            }
            for(int i=0;i<tmp;i++){
                cout<<(r/(n-1))+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}