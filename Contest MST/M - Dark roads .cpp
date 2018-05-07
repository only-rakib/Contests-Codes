#include<bits/stdc++.h>
using namespace std;
struct edge
{
    long long u,v,w;
};
bool acom(edge a,edge b)
{
    return a.w<b.w;
}
long long par[200009];
vector<edge>e;
long long find(long long r)
{
    if(par[r]==r)
        return r;
    par[r]=find(par[r]);
    return par[r];
}
long long mst(long long n)
{
    sort(e.begin(),e.end(),acom);
    for(long long i =0; i<=n; i++)
        par[i]=i;
    long long cnt=0,s=0;
    for(long long i=0; i<(int)e.size(); i++)
    {
        long long u=find(e[i].u);
        long long v=find(e[i].v);
        if(u!=v)
        {
            par[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n-1)
                break;
        }
    }
    return s;
}
int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)break;
        long long sum=0;
        for(long long i=1; i<=m; i++)
        {
            long long u,v,w;
            cin>>u>>v>>w;
            sum+=w;
            edge get;
            get.u=u;
            get.v=v;
            get.w=w;
            e.push_back(get);
        }
        cout<<sum-mst(n)<<endl;
        e.clear();
    }
    return 0;
}
