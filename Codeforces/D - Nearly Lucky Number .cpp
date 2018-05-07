#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int ara[10]={0};
    cin>>s;
    int l=s.length();
   // if(s[l-2]=='4' || s[l-2]=='7')
    //{
        for(int i=0;i<l;i++)
        {
            if(s[i]=='4')
            {
                ara[4]++;
            }
            else if(s[i]=='7')
            {
                ara[7]++;
            }
        }
        if(ara[4]+ara[7]==4 || ara[4]+ara[7]==7)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
  /*  }
    else
    {
        printf("NO\n");
    }*/
    ///return main();
}
