#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string s,ss; cin>>s>>ss;
        stack<char> st;
        int  sz1=s.size(),sz2=ss.size();
        if(s[0]!=ss[0]){
            cout<<"NO"<<endl;
            continue;
        }
        bool flag=true;
        int j=1;
        for(int i=1;i<sz1;i++){
            while(j < sz2 && s[i]!=ss[j]){
                if(ss[j]!=ss[j-1]){
                    flag=false;
                    break;
                }
                j++;
            }
            if(j >= sz2){
                flag=false;
                break;
            }
            j++;
            
        }
        while(j<sz2){
            if(ss[j]!=ss[j-1]){
                flag=false;
                break;
            }
            j++;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}