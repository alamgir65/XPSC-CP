#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    string s; cin >> s;

    int count = 0;
    bool flag = true;
    int sorted = 0, unsorted = INT_MAX;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '+') {
            count++;
        }
        else if (s[i] == '-') {
            count--;
        }
        else if (s[i] == '1') {
            sorted = count;
        }
        else {
            if(unsorted == INT_MAX) {
                unsorted = count;
            }
        }     

        if (sorted > count) {
            sorted = count;
        }
        if (count < unsorted) {
            unsorted = INT_MAX;
        }
        if ((s[i] == '0' && count == sorted) || (s[i] == '1' && unsorted <= count) || (s[i] == '0' && count < 2)) {
            flag = false;
            break;
        }
    }

    if(flag) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
int main(){
    Alamgir
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}