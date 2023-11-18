#include<bits/stdc++.h>
using namespace std;
bool isPowerOf2(int number){
    if(number <= 0){
        return false;
    }

    return (number & (number - 1)) == 0;
}
int main()
{   
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        bool flag=true;
        vector<int> v;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else{
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1]){
                v.push_back(i+1);
                }
            }
            bool istwo=true;
            for(auto& val:v){
                if(isPowerOf2(val)==false){
                    istwo=false;
                    break;
                }
            }
            if(istwo==true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}