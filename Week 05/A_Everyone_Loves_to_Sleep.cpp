#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,h,m; cin>>n>>h>>m;
        int ans=INT_MAX;
        while(n--){
            int hh,mm; cin>>hh>>mm;
            int hour=h,minute=m;
            int cnt=0;
            while(true){
                if(hour==hh && minute==mm) break;
                minute++;
                cnt++;
                if(minute==60){
                    hour++;
                    minute=0;
                }
                hour%=24;
            }
            ans=min(ans,cnt);
        }
        cout<<(ans/60)<<" "<<(ans%60)<<endl;

    }
    return 0;
}