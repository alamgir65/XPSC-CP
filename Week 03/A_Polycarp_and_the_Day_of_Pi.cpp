#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        string s="314159265358979323846264338327";
        string ss;
        cin>>ss;
        int cnt=0;
        for(int i=0;i<ss.size();i++){
            if(s[i]==ss[i]){
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}