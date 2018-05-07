#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
typedef long long ll;
struct edge
{
    ll u,v,w;
};
bool com(edge a,edge b)
{
    return a.w<b.w;
}
ll par[mx];
ll finds(ll r)
{
    if(par[r]==r)
        return r;
    par[r]=finds(par[r]);
    return par[r];
}
vector<edge>e;
vector<ll>ad[mx];
bool visited[mx];
ll mst(ll n)
{
    sort(e.begin(),e.end(),com);
    for(ll i=0; i<=n; i++)
        par[i]=i;
    ll cnt=0,sum=0,mxx=0;
    for(ll i =0; i<(int)e.size(); i++)
    {
        ll u =e[i].u;
        ll v = e[i].v;
        if(u!=v)
        {
            par[u]=v;
            cnt++;
            mxx=max(e[i].w,mxx);
            ad[u].push_back(v);
            ad[v].push_back(u);
            if(cnt==n-1)
                break;
        }
    }
    return mxx;
}
void bfs(int src)
{
    queue<ll>q;
    memset(visited,false,sizeof(visited));
    visited[src]=true;
    q.push(src);
    while(!q.empty())
    {
        ll u =q.front();
        q.pop();
        for(ll i=0; i<ad[u].size(); i++)
        {
            ll v=ad[u][i];
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int main()
{
    ll n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)break;
        while(m--)
        {
            ll u,v,w;
            cin>>u>>v>>w;
            edge get;
            get.u=u;
            get.v=v;
            get.w=w;
            e.push_back(get);
        }
        ll mxx=mst(n);
        bfs(0);
        int flg=0;
        for(ll i=0; i<n; i++)
        {
            if(visited[i]==false)
            {
                flg=1;
                break;
            }
        }
        if(flg==1)
            printf("IMPOSSIBLE\n");
        else
            cout<<mxx<<endl;
        for(ll i =0 ; i<=mx ; i++)
        {
            e.clear();
            ad[i].clear();
        }
    }
    return 0;
}
