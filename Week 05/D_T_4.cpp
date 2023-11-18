#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,m;
    while(cin>>n>>m){
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l=0,r=INT_MAX;
        int ans;
        while(l<=r){
            int container=1;
            int capacity=l+(r-l)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                if(a[i]>capacity){
                    container=INT_MAX;
                    break;
                }
                sum+=a[i];
                if(sum>capacity){
                    container++;
                    sum=a[i];
                }
            }
            if(container<=m){
                ans=capacity;
                r=capacity-1;
            }
            else{
                l=capacity+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}