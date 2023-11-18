#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        int mn=INT_MAX;
        for(int i=0;i<3;i++){
            if(a[i]<mn){
                mn=a[i];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(a[i]>mn){
                    if(a[i]%2!=0){
                        a[i]=(a[i]/2)+1;
                    }
                    else{
                        a[i]=a[i]/2;
                    }
                }
                else continue;
            }
        }
        bool flag=true;
        for(int i=0;i<3;i++){
            if(mn!=a[i]) flag=false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}