#include <bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n<=1) return 1;
    return (n*factorial(n-1));
}
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	   int choice= fac(n)/(factorial(n-2)*2);
	   cout<<choice<<endl;
	}
	return 0;
}
