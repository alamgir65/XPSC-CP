#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int x,y; cin>>x>>y;
	    if((2*x)>y){
	        cout<<((2*y)+x)<<endl;
	    }
	    else{
	        cout<<(5*x)<<endl;
	    }
	}
	return 0;
}
