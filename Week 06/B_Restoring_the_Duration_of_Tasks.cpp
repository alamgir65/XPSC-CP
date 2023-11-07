#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<int> v;
        for(int i=0;i<n;i++){
            int d=b[i]-a[i];
            if(i>0){
                if(b[i-1]>a[i]){
                    d=b[i]-b[i-1];
                }
            }
            v.push_back(d);
        }
        for(int val:v){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}