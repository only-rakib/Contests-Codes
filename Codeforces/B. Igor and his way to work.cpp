#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
ll n,m;
int sx,sy,dx,dy;
int V[1000][1000];
int d[1001][1001];
void bfs(int row,int col)
{
    ///cout<<"Paisi"<<endl;
    int tx,ty;
    bool visited[1001][1001];
    queue<pair<int,int> >Q;
    pair<int,int>top;
    memset(visited,false,sizeof(visited));
    memset(d,0,sizeof(d));
    visited[row][col]=true;
    d[row][col]=0;
    Q.push(make_pair(row,col));
    while(!Q.empty())
    {
        top=Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            tx=top.first+fx[i];
            ty=top.second+fy[i];
            if(tx>=0 && tx<n && ty>=0 && ty<m && V[tx][ty]!=-1 && visited[tx][ty]==false)
            {
                d[tx][ty]=d[top.first][top.second]+1;
                V[tx][ty]=-1;
                visited[tx][ty]=true;
                Q.push(make_pair(tx,ty));
            }
        }
    }
}

int main()
{
    ///freopen("572.txt","r",stdin);
    int num;
    char s;
    cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>s;

                if(s=='S')
                {
                    sx=i;
                    sy=j;
                    V[i][j]=1;
                }
                else if(s=='*')
                {
                    V[i][j]=-1;
                }
                else if(s=='T')
                {
                    dx=i;
                    dy=j;
                    V[i][j]=1;
                }
                else
                {
                    V[i][j]=1;
                }
            }
        }
        bfs(sx,sy);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<d[i][j]<<" ";
            }
            cout<<endl;
        }
        num=d[dx][dy];
        int mn=min(n,m);
        double turn=(num*1.0/mn*1.0);
        cout<<d[dx][dy];
        if(turn<=2.00)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    ///main();
}
