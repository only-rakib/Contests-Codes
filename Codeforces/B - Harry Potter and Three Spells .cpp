#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l,m,n;
    double sl,lg,gs;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    bool chk=false;

    if((b*d*f)>(a*c*d))
    {
        printf("Ron\n");
    }
    else if(b==0 || f==0)
    {
        printf("Hermione\n");
    }
    else if(a==0 || c==0 ||e==0)
    {
        printf("Ron\n");
    }
    else
    {


        printf("Hermione\n");

    }
    return main();
}
