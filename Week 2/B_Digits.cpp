// link : https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k; cin>>n>>k;
    int cnt=0;
    while(n!=0){
        n=n/k;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}