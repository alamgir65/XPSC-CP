#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        string s;
        cin>>s;
        vector<ll> v;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                sum+=i;
                v.push_back((n-1-i)-i);
            }
            else{
                sum+=(n-1-i);
                v.push_back(i-(n-1-i));
            }
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=0;i<n;i++){
            if(v[i]>0){
                sum+=v[i];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}