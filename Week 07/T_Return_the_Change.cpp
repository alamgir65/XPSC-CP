#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    if(n%10==0) cout<<(100-n)<<endl;
	    else{
	        int a=(((n+5)/10) * 10);
	        cout<<(100-a)<<endl;
	    }
	}
	return 0;
}
