#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int seconds=0;
        int curr=1;
        for(auto c:s){
            int x=c-'0';
            int dif=abs(x-curr);
            seconds+=min(dif,10-dif); 
            curr=x;
            seconds++;
        }
        cout<<seconds<<endl;
    }
    return 0;
}