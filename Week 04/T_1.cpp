#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);
	    long long x=0;
	    int ans=0;
	    for(int i=n-1;i>=0;i--){
	        if(a[i]>x){
	            ans++;
	            x=0;
	        }
	        x=(x^a[i]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
