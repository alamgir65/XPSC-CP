#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    bool flag=true;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            for(int k=j+1;k<n;k++){
	                if(a[j]-a[i]==a[k]-a[j]){
	                    flag=false;
	                    break;
	                }
	            }
	        }
	    }
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
	return 0;
}
