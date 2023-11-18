#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    int mx=INT_MIN;
	    int mx2=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(a[i]>mx){
	            mx=a[i];
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]!=mx && a[i]>mx2){
	            mx2=a[i];
	        }
	    }
	    cout<<(mx+mx2)<<endl;
	}
	return 0;
}
