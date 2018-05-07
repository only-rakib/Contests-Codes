#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s>>s1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    if(s>s1)
    {
        printf("1\n");
    }
    else if(s<s1)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }
    //main();
}
