#include<bits/stdc++.h>
using namespace std;
#define mx 10001
map<long long ,long long> ara;
map<long long,long long> tree;
void initial(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ara[b];
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    initial(left,b,mid);
    initial(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
    {
        return 0;
    }
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
int main()
{
    int i,n,a,b,c;
    int ar[10000],as[10000];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ar[i]>>as[i];
        c=ar[i]+as[i]-1;
        ara[c]++;
    }
    initial(1,1,n);
    for(i=1;i<=n;i++)
    {
        cout<<query(1,1,n,ara[i],ara[n]);
    }
}

