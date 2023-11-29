#include<bits/stdc++.h>
#define ll long long
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " "<< y << '\n';
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl '\n'
#define nl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define pii pair<int,int>
#define all(x) x.begin(), x.end()
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
ll gcd(ll a,ll b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
 
ll lcm(ll a,ll b) {
    return (a / gcd(a,b)) * b;
}
bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
    return false;
}
 
bool isSame(ll n, ll arr[]) {
    for(ll i = 0; i < n; i++) {
        if(arr[i] != arr[0]) return false;
    }
    return true;
}
 
bool isSame(ll n, vector<ll> &arr) {
    for(ll i = 0; i < n; i++) {
        if(arr[i] != arr[0]) return false;
    }
    return true;
}
bool isSorted(ll n, ll arr[]) {
    for(ll i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}
 
bool isSorted(ll n, vector<ll> &arr) {
    for(ll i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}
void inputArr(ll n, ll arr[]){
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
}
void inputArr(ll n, vector<ll> &arr){
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        arr.pb(x);
    }
}
void printArr(ll n, ll arr[]) {
    for(ll i = 0; i < n; i++) cout << arr[i] << " ";
    cout << nl;
}
 
void printArr(ll n, vector<ll> &arr) {
    for(ll i = 0; i < n; i++) cout << arr[i] << " ";
    cout << nl;
}
ll sumOfArr(ll n, ll arr[]) {
    ll ans = 0;
    for(ll i = 0; i < n; i++) ans += arr[i];
    return ans;
}
 
ll sumOfArr(ll n, vector<ll> &arr) {
    ll ans = 0;
    for(ll i = 0; i < n; i++) ans += arr[i];
    return ans;
}
bool isPrime(ll n) {
    if(n == 1) return false;
    for(ll i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
vector<ll> primeFactorization(ll n) {
    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++) {
        ll cnt = 0; 
        while(n % i == 0) {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
 
bool isPalindrome(string s) {
    ll i = 0;
    ll j = s.size() - 1;
    while(i <= j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
void solve(){
    ll n; cin>>n;
    ll m=(n*(n+1))/2;
    ll s=(n - m%n);
    ll a[n+1];
    cout<<s+1<<" ";
    for(int i=2;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<nl;
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