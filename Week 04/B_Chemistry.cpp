#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int x=0;
        int frq[26]={0};
        for(int i=0;i<n;i++){
            frq[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(frq[i]%2!=0) x++;
        }
        if(k==n) cout<<"YES"<<endl;
        else if(k>=x && (k-x)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}