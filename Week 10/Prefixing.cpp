#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    multiset<int> st;
	    for(int i=0;i<n;i++){
	         cin>>a[i];
	         st.insert(a[i]);
	    }
	    vector<int> v;
        //v.push_back(1);
	    for(int i=0;i<n;i++){
	        auto px=st.upper_bound(a[i]);
            px--;
            v.push_back(*px);
	        auto r=st.find(*px);
            st.erase(r);
	       
	    }
	    for(int val:v){
            cout<<val<<" ";
        }
        cout<<endl;
	}
	return 0;
}
