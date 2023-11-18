#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        int a[n];
        int x[q];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<q;i++) cin>>x[i];
        unordered_map<int,int> mp;
        for(int i=0;i<q;i++){
            mp[x[i]]++;
        }
        for(int i=0;i<q;i++){
            for(int j=1;j<=30;j++){
                int pow=1<<j;
                if(a[i]%pow == 0 && mp.find(j)!=mp.end()){
                    a[i]+= (i<<(j-1))* mp[j];
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}