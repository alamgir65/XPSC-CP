#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    double n,m; cin>>n>>m;
	    n=(n - n/10.0);
	    if(n<m) cout<<"ONLINE"<<endl;
	    else if(m<n) cout<<"DINING"<<endl;
	    else cout<<"EITHER"<<endl;
	}
	return 0;
}
