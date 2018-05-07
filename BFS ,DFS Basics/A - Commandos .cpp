#include<bits/stdc++.h>
using namespace std;
vector<int>V[100];
int d[1000];
int src,dis;
int visited[1000];
int node;
void dfs(int s)
{
    int i,j;
    if(visited[s]==1)
    {
        return;
    }
    visited[s]=1;
    for(i=0; i<V[s].size(); i++)
    {
        j=V[s][i];
        if(visited[j]==0)
        {
            d[j]=d[s]+1;
            dfs(j);
        }
        /*else if(visited[j]==1)
        {
            return;
        }*/
    }
    visited[s]=2;
}
int main()
{
    freopen("A - Commandos.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int test,edge,u,v,i,j,nai;
    int d1[1000],d2[1000],d3[1000];
    cin>>test;
    for(nai=1; nai<=test; nai++)
    {
        cin>>node>>edge;
        while(edge--)
        {
            cin>>u>>v;
            V[u].push_back(v);
            V[v].push_back(u);
        }
        cin>>src>>dis;
        dfs(src);
        for(i=0; i<node; i++)
        {
            d1[i]=d[i];
        }
        memset(visited,0,sizeof(visited));
        memset(d,0,sizeof(d));
        dfs(dis);
        for(i=0; i<node; i++)
        {
            d2[i]=d[i];
        }
        memset(visited,0,sizeof(visited));
        memset(d,0,sizeof(d));
        for(i=0; i<node; i++)
        {
            d3[i]=d1[i]+d2[i];
        }
        sort(d3,d3+node);

        printf("Case %d: %d\n",nai,d3[node-1]);
        for(i=0; i<node; i++)
        {
            V[i].clear();
        }
        memset(d3,0,sizeof(d3));
    }

    return 0;
}
