#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[1000],str2[1000],str3[10000];
    int i,j,k,l,m,n,p,q,x,y;
    char ch,ch1;
    gets(str1);gets(str2);gets(str3);
    for(i=0;i<strlen(str3);i++)
    {
        if(str3[i]>='0' && str3[i]<='9')
        {
            cout<<str3[i];
        }
        if(str3[i]>='A' && str3[i]<='Z')
        {
            ch=str3[i]+32;
            for(j=0;j<strlen(str1);j++)
            {
                if(ch==str1[j])
                {
                    //ch1=str2[j];
                    printf("%c",str2[j]-32);
                }
            }
        }
        else if(str3[i]>='a' && str3[i]<='z')
        {
            ch=str3[i];
            for(j=0;j<strlen(str1);j++)
            {
                if(ch==str1[j])
                {
                    cout<<str2[j];
                }
            }
        }
    }
    cout<<endl;
    //main();
}
