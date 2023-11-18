#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s; cin>>s;
    int frq[26]={0};
    int odd=0;
    for(int i=0;i<s.size();i++){
        frq[s[i]-'A']++;
    }
    //int odd=0;
    char c;
    for(int i=0;i<26;i++){
        if(frq[i]%2!=0){
            odd++;
            c=i+'A';
            frq[i]--;
        }
    }
    string ss="";
    if(odd>1) cout<<"NO SOLUTION"<<endl;
    else{
        for(int i=0;i<26;i++){
            int curr=frq[i]/2;
            char a=i+'A';
            while(curr--){
                ss.push_back(a);
            }
        }
        
        string r=ss;
        reverse(r.begin(),r.end());
        if(odd==1){
            ss.push_back(c);
        }
        string m=ss+r;
        cout<<m<<endl;
    }
    return 0;
}