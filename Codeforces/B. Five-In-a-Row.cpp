#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[11][11];
    int i,j,k,s1=0,s2=-1,s3,s4,s5,s6,cnt=0;
    for(i=0; i<10; i++)
        cin>>str[i];
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(str[i][j]=='X' && s2==-1)
            {
                s2=1;
                s3=j;
            }
            else if(str[i][j]=='X' && s2==1)
            {
                s4=j;
                cnt=s4-s3;
            }
            else
            {
                s3=999;
                s4=-9999;
                   s2=-1;
            }
            if(cnt>=4)
            {
                s1=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(s1==1)
        {
            break;
        }
    }
    s2=-1;
    if(s1==0)
    {
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                if(str[j][i]=='X' && s2==-1)
                {
                    s2=1;
                    s3=j;
                }
                else if(str[j][i]=='X' && s2==1)
                {
                    s4=j;
                    cnt=s4-s3;
                }
                else
                {
                    s3=999;
                    s4=-9999;
                       s2=-1;
                }
                if(cnt>=4)
                {
                    s1=1;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(s1==1)
            {
                break;
            }
        }
        if(s1==0)
            cout<<"NO"<<endl;

    }
    main();
}
