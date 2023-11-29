#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    if(n==1) cout<<"a"<<endl;
    else if(n==2) cout<<"aa"<<endl;
    else if(n==3) cout<<"bba"<<endl;
    else{
        int x=n/4;
        while(x--){
            cout<<"aabb";
        }
        n%=4;
        if(n==3) cout<<"aab"<<endl;
        else if(n==2) cout<<"aa"<<endl;
        else if(n==1) cout<<"a"<<endl;
    }
    return 0;
}