#include <bits/stdc++.h>
using namespace std;
int  store[66000];
int ara [67000];
int main ()
{
    int n, i, j, k;
    int X;

    ara[1] = 1;
    j = 1;
    k = 2;
    for (i = 1; i <= 65537; i ++)
    {
        ara[k] = j + i;
        j = j + i;
        k ++;

    }
    i=0;
    cin>>n;
    int nai=n;
    while(n--)
    {
        cin>>X;
        if(binary_search(ara,ara+65537,X))
        {
            store[i++]=1;
        }
        else
            store[i++]=0;
    }
    for(i =0 ;i<nai;i++)
        cout<<store[i]<<" ";
    return 0;
}
