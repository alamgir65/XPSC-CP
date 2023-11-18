#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    //int a[n];
	    for(int i=0;i<n;i++){
	        int x; cin>>x;
	        if(x==0) cout<<1<<" ";
	        else cout<<0<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
