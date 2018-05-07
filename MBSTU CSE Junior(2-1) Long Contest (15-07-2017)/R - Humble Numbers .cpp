#include<bits/stdc++.h>
using namespace std;
#define mx 2000000000
long long ara[10000];
/*bool primeFactors(long long n)
{
    bool ck=true;
    while (n%2 == 0)
    {
        n = n/2;
    }
    for (long long i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            if(i>7)
            {
                ck=false;
                break;
            }
            n = n/i;
        }
    }
    if(n>7)
        ck=false;
    return ck;
}*/
void humble()
{
    bool ok;
    int k=1;
    for(long long i=1;i<=2000000000;i++)
    {
        ok=primeFactors(i);
        if(ok)
        {
            ara[k++]=i;
            /*if(k> 5842)
                break;*/
        }
    }
}
int main()
{
    humble();
    for(int i=1;i<=2000;i++)
    {
        cout<<ara[i]<<endl;
    }
}
