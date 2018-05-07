#include<bits/stdc++.h>
using namespace std;
int n,container,high;
int ara[10000];
bool chk(int mid)
{
    int limit=0,sum=0,lagbe=0;
    for(int i=0; i<n; i++)
    {
        if(ara[i]>mid)
            return false;
        if(sum+ara[i]>mid)
        {
            sum=0;
        }
        if(sum==0)
        {
            limit++;
        }
        sum+=ara[i];
    }
    if(limit>container)
        return false;
    else
        return true;
}
void binary()
{
    int low=0,index,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        //cout<<"::"<<mid<<endl;
        if(chk(mid))
        {
            index=mid;
            //cout<<"::"<<index<<endl;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<index<<endl;
}
int main()
{
    int i,j;
    while(cin>>n>>container)
    {
        high=0;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            high+=ara[i];
        }
        binary();
    }
}
