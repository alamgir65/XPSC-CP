#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    ll x; cin >> x;
    if(x > 1)
    {
       if(x <= 1e6)
       cout << 1 << " " << 1 << " " << x - 1 << endl;
       else if(x > 1e6 && x % 1000000!=0)
       cout << 1000000 << " " << x / 1000000 << " " << x % 1000000 << endl;
       else
       cout << 1000000 << " " << x / 1000000 - 1 << " " << 1000000 << endl;
    }
    else
    cout << -1 << endl;
	}
	return 0;
}
