#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	
	    map<int,int> mp;
	    int mx=INT_MIN;
	    for(int i=0;i<n;i++){
	         cin>>a[i];
	         mp[a[i]]++;
	         mx=max(mx,a[i]);
	    }
	    vector<int> v(n,0);
        //v.push_back(1);
        for(int i=0;i<n;i++){
            if(mp[a[i]]!=0){
                v[i]=a[i];
                mp[a[i]]=0;
            }
        }
	    for(int i=0;i<n;i++){
	        if(v[i]==0){
	            v[i]=mx;
	        }
	    }
	    for(int val:v){
            cout<<val<<" ";
        }
        cout<<endl;
	}
	return 0;
}
