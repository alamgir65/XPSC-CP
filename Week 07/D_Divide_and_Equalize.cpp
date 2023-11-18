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
        map<int,int> mp;
        for(int k=0;k<n;k++){
            int curr=a[k];
            for(int i=2;i*i<=curr;i++){
                while(curr%i==0){
                    mp[i]++;
                    curr/=i;
                }
            }
            if(curr>1){
                mp[curr]++;
            }
        }
        bool flag=true;
        for(auto u : mp){
            int y=u.second;
            if(y%n != 0){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}