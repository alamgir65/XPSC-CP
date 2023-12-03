#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int tree[4*N];
void build(int Node,int l,int r,int a[]){
    if(l==r){
        tree[Node]=a[l];
        return;
    }
    int mid=(l+r)/2;
    int leftNode=2*Node;
    int rightNode=leftNode+1;
    build(leftNode,l,mid,a);
    build(rightNode,mid+1,r,a);
    tree[Node]=min(tree[leftNode],tree[rightNode]);
}
int query(int Node,int l,int r,int x,int y){
    if(y<l || x>r) return INT_MAX;
    if(l>=x && y>=r){
        return tree[Node];
    }
    int mid=(l+r)/2;
    int leftNode=2*Node;
    int rightNode=leftNode+1;
    return min(query(leftNode,l,mid,x,y),query(rightNode,mid+1,r,x,y));

}
int main()
{   
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        int n,q; cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        build(1,0,n-1,a);
        cout<<"Case "<<i<<":"<<endl;
        while(q--){
            int x,y; cin>>x>>y;
            x--;
            y--;
            cout<<query(1,0,n-1,x,y)<<endl;
        }
    }
    return 0;
}