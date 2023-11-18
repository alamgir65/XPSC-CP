#include<bits/stdc++.h>
using namespace std;
int t=1;
int main()
{   
    while(true){
        int n,q; cin>>n>>q;
        if(n==0 && q==0) break;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        cout<<"CASE# "<<t<<":"<<endl;
        for(int i=1;i<=q;i++){
            int x; cin>>x;
            int l=0,r=n-1;
            bool flg=true;
            bool flag=false;
            int k=0;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(a[mid]==x){
                    k=mid+1;
                    r=mid-1;
                }
                else if(a[mid]>x){
                    r=mid-1;
                }
                else {
                    l=mid+1;
                }
            }
            if(k>0) cout<<x<<" found at "<<k<<endl;
            else cout<<x<<" not found"<<endl;
        }
        t++;
    }
    return 0;
}