#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    int e_cnt=0;
    int o_cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       if(a[i]%2==0) e_cnt++;
       else o_cnt++;
    }
    cout<<min(e_cnt,o_cnt)<<endl;
   
    return 0;
}