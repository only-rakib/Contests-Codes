#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
int cell[100][100];
int d[100][100],vis[100][100];
int row,col;
void bfs(int sx,int sy)
{
    vis[sx][sy]=1;
    for(int k=0; k<4; k++)
    {
        int tx=sx+fx[k];
        int ty=sy+fy[k];
        if(tx>=0 && tx<row && ty>=0 && ty<col && cell[tx][ty]!=-1 and vis[tx][ty]==0)
        {
            vis[tx][ty]=1;
            cell[tx][ty]=-1;
        }
    }
}
int main()
{
    char ch[100][100];
    int test,kase,i,j,k;
    cin>>test;
    for(kase=1; kase<=test; kase++)
    {
        memset(vis,0,sizeof(vis));
        cin>>row>>col;
        getchar();
        for(i=0; i<row; i++)
        {
            scanf("%s",ch[i]);
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(ch[i][j]=='1')
                {
                    cell[i][j]=1;
                }
                else
                    cell[i][j]=0;
            }
        }
        int sum=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(cell[i][j]==1)
                    bfs(i,j);
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(cell[i][j]==-1)
                    sum++;
            }
        }
        cout<<sum<<endl;
    }

}
