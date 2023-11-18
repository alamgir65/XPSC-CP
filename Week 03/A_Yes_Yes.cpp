#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        string s1="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string s; cin>>s;
        if(s1.find(s)<=53){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}