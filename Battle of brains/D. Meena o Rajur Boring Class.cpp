#include<bits/stdc++.h>
using namespace std;
#define pi 3.141593
#define div 0.25

long long ara[40];
void fibo()
{
    ara[0]=0;
    ara[1]=1;
    for(int i=2; i<=37; i++)
    {
        ara[i]=ara[i-1]+ara[i-2];
    }
}
int main()
{
    fibo();
    int test,i,j,k,n;
    double sum,area;
    cin>>test;
    while(test--)
    {
        sum=0;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            area=(double)((ara[i]*1.0)*(ara[i]*1.0));
            sum+=(double)(area-(div*pi*area));
        }
        printf("%.2lf\n",sum);
    }
}
