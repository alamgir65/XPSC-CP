#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    int l=0,r=4;
    bool flag=true;
    while(l<r){
        if(s[l]!=s[r]){
            flag=false;
        }
        l++;
        r--;
    }
    return flag;
}
int main()
{   
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x; cin>>x;
        int ans=0;
        int h=x/60,m=x%60;
        map<string,bool> visited;
        while(!visited[s]){
            if(palindrome(s)) ans++;
            visited[s]=true;
            int hh=((s[0]-'0')*10) + (s[1]-'0');
            int mm=((s[3]-'0')*10) + (s[4]-'0');
            hh+=h;
            mm+=m;
            if(mm>59){
                hh++;
            }
            hh=hh%24;
            mm%=60;
            s[0]=((hh/10)+'0');
            s[1]=((hh%10)+'0');
            s[3]=((mm/10)+'0');
            s[4]=((mm%10)+'0');
        }
        cout<<ans<<endl;
    }
    return 0;
}