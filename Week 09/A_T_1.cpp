#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
//int a[N];
int tree[4*N];
void build (int node, int l, int r, int a[]) {
    if(l == r) {
        tree[node] = a[r];
        return;
    }

    int leftNode = node*2;
    int rightNode = leftNode+1;
    int mid = (l+r)/2;

    build (leftNode, l, mid, a);
    build(rightNode, mid+1, r, a);

    tree[node] = tree[leftNode] + tree[rightNode];
}
int query1(int Node,int l,int r,int x,int y){
    if(y<l || x>r) return 0;
    if(x<=l && y>=r){
        return tree[Node];
    }
    int leftNode=2*Node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    return query1(leftNode,l,mid,x,y) + query1(rightNode,mid+1,r,x,y);
}

void update(int Node,int l,int r,int i,int val){
    if(i<l || i>r) return;
    if(l==r && l==i){
        tree[Node]+=val;
        return;
    }
    int leftNode=2*Node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    update(leftNode,l,mid,i,val);
    update(rightNode,mid+1,r,i,val);
    tree[Node]=tree[leftNode]+tree[rightNode];
}
int value(int Node,int l,int r,int i){
    if(i<l || i>r) return 0;
    if(l==i && r==i){
        return tree[Node];
    }
    int leftNode=2*Node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    value(leftNode,l,mid,i);
    value(rightNode,mid+1,r,i);
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
            int op; cin>>op;
            if(op==1){
                int j; cin>>j;
                int ans=a[j];
                a[j]=0;
                cout<<ans<<endl;
                update(1,0,n-1,j,-ans);
            }
            else if(op==2){
                int j,val; cin>>j>>val;
                a[j]+=val;
                update(1,0,n-1,j,val);
            }
            else if(op==3){
                int x,y; cin>>x>>y;
                cout<<query1(1,0,n-1,x,y)<<endl;
            }
        }
    }
    return 0;
}