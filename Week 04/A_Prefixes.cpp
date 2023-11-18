#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    string s; cin>>s;
    int cntA=0;
    int cntB=0;
    int cnt=0;
    for(int i=0;i<n;i+=2){
        if(s[i]==s[i+1]){
            if(s[i]=='a'){
                s[i]='b';
            }
            else{
                s[i]='a';
            }
            cnt++;
        }
    }
    cout<<cnt<<endl<<s<<endl;
    return 0;
}