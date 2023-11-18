// problem link: https://codeforces.com/problemset/problem/1800/B
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;
        string s; cin>>s;
        int frq[26]={0};
        int frq2[26]={0};
        for(int i=0;i<n;i++){
            if(s[i]>=97){
                frq[s[i]-'a']++;
            }
            else{
                frq2[s[i]-'A']++;
            }
        }
        long long ans=0,makes=0;
        for(int i=0;i<26;i++){
            ans+=min(frq[i],frq2[i]);
            frq[i]=abs(frq[i]-frq2[i]);
            makes+=(frq[i]/2);
        }
        ans = ans + min(k,makes);
        cout<<ans<<endl;
    }
    return 0;
}