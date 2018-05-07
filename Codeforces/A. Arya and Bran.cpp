#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,i,j;
    cin>>n>>k;
    int sum=0,rem=0,flg=0,d;
    for(i=1; i<=n; i++)
    {

        cin>>l;
        l+=rem;
        if(l>8)
        {
            sum+=8;
            rem=l-8;
        }
        else
        {
            sum+=l;
            rem=0;
        }
        ///cout<<sum<<endl;
        if(sum>=k && i<=n && flg==0)
        {
            d=i;
            flg=1;
        }
    }
    if(flg)
    {
        cout<<d<<endl;
    }
    else
        cout<<-1<<endl;
    //main();
}
