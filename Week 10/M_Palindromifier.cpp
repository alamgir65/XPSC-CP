#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s,x; cin>>s;
    int n=s.size();
    x=s;
    reverse(x.begin(),x.end());
    if(x==s) cout<<0<<endl;
    else{
        cout<<3<<endl;
        cout<<'R'<<" "<<n-1<<endl;
        cout<<'L'<<" "<<n<<endl;
        cout<<'L'<<" "<<2<<endl;
    }
    return 0;
}