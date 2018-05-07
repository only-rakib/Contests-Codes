#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b;
    c=1;
    while(1)
    {
        if(a<c)
        {
            printf("Vladik\n");
            break;

        }
        else
        {
            a=a-c;
            c++;
        }
        if(b<c)
        {
            printf("Valera\n");
            break;
        }
        else
        {
            b=b-c;
            c++;
        }
    }

   // return main();
}
