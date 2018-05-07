#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nx[]={-1,0,+1,-1,1,-1,0,+1};
ll ny[]={+1,+1,+1,0,0,-1,-1,-1};

char grid[21][21];
int main()
{

    ll x,y,z;
    ll n,r,c;

    cin>>n>>r>>c;

    while(n--)
    {
        for(ll __x=0;__x<r;__x++)
        {
            for(ll __y=0;__y<c;__y++)
            {
                cin>>grid[__x][__y];
            }
        }



        ll cou=0;

        for(x=0;x<r;x++)
        {
            for(y=0;y<c; /*silent*/ )
            {
                if(grid[x][y]=='1')
                {
                    cou++;
                    grid[x][y]='*';
                    while(y+1<c)
                    {
                        y++;
                        if(grid[x][y]=='1')continue
                    }
                }
            }
        }
    }








}
