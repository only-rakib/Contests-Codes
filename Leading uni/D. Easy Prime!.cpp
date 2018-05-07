#include<bits/stdc++.h>
using namespace std;
#define mx 10000000
int tree[mx*4];
int ara[mx];
long long n=mx;
bool prime[mx];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));

    for (long long int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (long long int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    prime[0]=false;
    prime[1]=false;
}

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

void update(int node,int b,int e,int i,int new_value)
{
    if(i>e || i<b)
    {
        return;
    }
    if(b>=i && e<=i)
    {
        tree[node]=new_value;
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,new_value);
    update(right,mid+1,e,i,new_value);
    tree[node]=tree[left]+tree[right];
}

int main()
{
    SieveOfEratosthenes();
    int n,q,x,y,a,p,temp;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>temp;
        if(prime[temp])
        {
            ara[i]=1;
        }
        else
        {
            ara[i]=0;
        }
    }
    cin>>q;
    initial(1,1,n);
    while(q--)
    {
        cin>>p;
        if(p==1)
        {
            cin>>x>>y;
            query(1,1,n,x,y);
            cout<<query(1,1,n,x,y)<<endl;
        }
        else
        {
            cin>>x>>a;
            if(prime[a])
                update(1,1,n,x,1);
            else
                update(1,1,n,x,0);
        }
    }
}
