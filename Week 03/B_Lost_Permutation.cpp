#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--){
        int n,s; cin>>n>>s;
        int a[n];
        int mx=INT_MIN;
        set<int> st;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            st.insert(x);
            mx=max(mx,x);
        }
        int i=1;
        while(s>0){
            if(st.find(i)==st.end()){
                st.insert(i);
                s-=i;
                mx=max(mx,i);
            }
            i++;
        }
        if( s == 0 && st.size() == mx){
            cout << "YES"<<endl;
        }else{
            cout<< "NO"<<endl;
        }
    }
    return 0;
}