#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,j,k;
    char input[100];
    char disease[2][10]=
    {
        "Fever",
        "Cold",
    };
    char prescribe[2][30]=
    {
        "Napa 1-0-1",
        "Fenadine 0-0-1",
    };
    int ara[]={20,30,40};
    printf("Enter disease:\n");
    gets(input);
    for(i=0;i<2;i++ )
    {
        if(strcmp(input,disease[i])==0)
        {
            printf("%s\n",prescribe[i]);
        }
    }

    return 0;
}
