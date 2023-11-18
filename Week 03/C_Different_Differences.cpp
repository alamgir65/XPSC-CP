#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int k,n; cin>>k>>n;
        int j=1,dif=1;
        for(int i=1;i<=k;i++){
            cout<<j<<" ";
            if(n-(j+dif)>=k-(i+1)){
                j=j+dif;
                dif++;
            }
            else{
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}