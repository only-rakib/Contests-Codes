#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    char str[1000],ch;
    long long b;
    int c,i,j,k,l,x,y,z;
    while(cin>>str>>ch>>b)
    {
        int len=strlen(str);
        long long sum=0;
        for(i=0; i<len; i++)
        {
            sum=sum*10+(str[i]-'0');
            str[i]=(sum/b)+'0';
            sum%=b;
        }
        if(ch=='%')
        {
            cout<<sum<<endl;
        }
        else
        {
            int flag = 0;
            for(i=0; i<len; i++)
            {
                if(str[i]!='0')
                {
                    c=i;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<0<<endl;
            }
            else
            {
                for(i=c; i<len; i++)
                {
                    cout<<str[i];
                }
                cout<<endl;
            }
        }
    }
}
