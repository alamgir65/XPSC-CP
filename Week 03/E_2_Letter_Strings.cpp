// problem link: https://codeforces.com/problemset/problem/1669/E
/***#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++){
            string s; cin>>s;
            v.push_back(s);
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string s1=v[i],s2=v[j];
                if(s1[0]!=s2[0] && s1[1]==s2[1]){
                    ans++;
                }
                else if(s1[1]!=s2[1] && s1[0]==s2[0]){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
***/
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[12][12]={0};
        long long ans=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<2;j++){
                for(char ch='a';ch<='k';ch++){
                    if(ch==s[j]) continue;
                    string s2=s;
                    s2[j]=ch;
                    ans+=arr[s2[0]-'a'][s2[1]-'a'];
                }
            }
            arr[s[0]-'a'][s[1]-'a']++;
        }
        cout<<ans<<endl;
    }

    return 0;
}