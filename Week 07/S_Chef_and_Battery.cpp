#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    if(n>50){
	        if((n-50)%3==0) cout<< (n-50)/3 <<endl;
	        else if((n-50)%3==1) cout<< ((n-50)/3 + 2)<<endl;
	        else cout<< ((n-50)/3 + 4)<<endl;
	    }
	    else{
	        if((50-n)%2==0) cout<<(50-n)/2 <<endl;
	        else cout<<((50-n)/2) +3<<endl;
	    }
	}
	return 0;
}
