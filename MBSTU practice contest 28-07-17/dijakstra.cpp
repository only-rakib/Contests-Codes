#include<bits/stdc++.h>
using namespace std;

long long d[10000];//Distance function

list<pair<int,int> > *graph;

void dijkstra(int root)
{
    set<pair<int,int> > pq;
    set<pair<int,int> > ::iterator it;
    int u,v,wt;
    list<pair<int,int> > :: iterator i;
    d[root]=0;

    pq.insert(pair<int,int>(0,root));

    while(pq.size()!=0)
    {
        it=pq.begin();

        u=it->second;

        pq.erase(it);

        for(i=graph[u].begin(); i!=graph[u].end(); i++)
        {
            v=i->first;
            wt=i->second;
            if(d[v]>d[u]+wt)
            {
                if(d[v]!=1e8)
                {
                    pq.erase(pq.find(pair<int,int>(d[v],v)));
                }
                d[v]=d[u]+wt;
                pq.insert(pair<int,int>(d[v],v));
            }
        }
    }
}

void addedge(int src,int des,int wt)
{
    pair<int,int> x;

    x.first=des;
    x.second=wt;

    graph[src].push_front(x);
    x.first=src;
    x.second=wt;

    graph[des].push_front(x);
}

int main()
{
    int i;
    int t,n;
    cin>>n;
    int v,e,src,des,wt;
    for(i=0; i<=10000; i++)
    {
        d[i]=1e8;
    }
    graph=new list<pair<int,int> >[n+1];
    for(i=0; i<n; i++)
    {
        cin>>src>>des>>wt;
        addedge(src,des,wt);
    }
    int x=7,y=6;
    dijkstra(x);
    cout<<d[y]<<endl;
    return 0;
}
