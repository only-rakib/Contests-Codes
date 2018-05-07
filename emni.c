#include<stdio.h>

int main()
{

    int number,i;
    scanf("%d",&number);
    int s=0;
    for(i=1;i<=10;i++)
    {

        printf("%d X %d = %d\n",number,i,s=s+number);
    }
}
