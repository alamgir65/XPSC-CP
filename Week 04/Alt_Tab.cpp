// problem link: https://www.codechef.com/problems/ALTTAB
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n; cin>>n;
	stack<string> st;
	for(int i=0;i<n;i++){
	    string s; 
	    cin>>s;
	    st.push(s);
	}
	string ans="";
	map<string,int> mp;
	while(!st.empty()){
	    string s=st.top();
	    st.pop();
	    int m=s.size();
	    if(mp[s]==0){
	        ans.push_back(s[m-2]);
	        ans.push_back(s[m-1]);
	        mp[s]++;
	    }
	}
	cout<<ans<<endl;
	return 0;
}
