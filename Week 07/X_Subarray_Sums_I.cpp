#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    int i=0,j=0;
    int sum=0;
    while(j<n){
        sum+=a[j];
        while(sum>k){
            sum-=a[i];
            i++;
        }
        if(sum==k){
            cnt++;
            sum-=a[i];
            i++;
        }
        j++;
    }
    cout<<cnt<<endl;
    return 0;
}