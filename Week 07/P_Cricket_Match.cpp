#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,m; cin>>n>>m;
	    ((m*36)>=n) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}
