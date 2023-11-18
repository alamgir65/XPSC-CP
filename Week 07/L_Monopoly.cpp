#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int p,q,r,s; cin>>p>>q>>r>>s;
	    if((p+q+r)<s || (p+q+s)<r || (q+r+s)<p || (p+r+s)<q) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
