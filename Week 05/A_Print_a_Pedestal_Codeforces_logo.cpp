#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a,b,c;
        int avarage=n/3;
        int extra=n%3;
        a=avarage,b=avarage+1,c=avarage-1;
        if(extra==1) b++;
        else if(extra==2){
            a++;
            b++;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}