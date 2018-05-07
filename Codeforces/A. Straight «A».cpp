#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1000];
    int n,k,i,j,total=0,sum;
    double marks,aa;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>sum;
        ara[i]=sum;
        total+=sum;
    }
    marks=round(total*1.0/n*1.0);
    if(marks==k)
    {
        printf("0\n");
    }
    else
    {
        for(i=1;marks<=k; i++)
        {
            marks=round(((total*1.0+(k*i)*1.0)/(n+i)*1.0)*1.0);
            //printf("%lf\n",marks);
            if(marks==k)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
