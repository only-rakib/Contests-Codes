#include<bits/stdc++.h>
using namespace std;
int hex_dec(string hex)
{
        long long decimal, place;
        int i = 0, val, len;
        decimal = 0;
        place = 1;
        len = hex.length();
        place=len-1;
        for(i=0; i<len; i++)
        {

            if(hex[i]>='0' && hex[i]<='9')
            {
                val = hex[i] - 48;
            }
            else if(hex[i]>='a' && hex[i]<='f')
            {
                val = hex[i] - 97 + 10;
            }
            else if(hex[i]>='A' && hex[i]<='F')
            {
                val = hex[i] - 65 + 10;
            }

            decimal += val * pow(16, place);
            place--;
        }
        return decimal;
}
int main()
{
    string ss,ss1;
    char ch;
    int n,t,i,j,k,l;
    char ara[17][10]= {"0000",
                       "0001",
                       "0010",
                       "0011",
                       "0100",
                       "0101",
                       "0110",
                       "0111",
                       "1000",
                       "1001",
                       "1010",
                       "1011",
                       "1100",
                       "1101",
                       "1110",
                       "1111"
                      };
    while(cin>>n)
    {
        getchar();
        while(n--)
        {
            cin>>ss>>ch>>ss1;
            int x=hex_dec(ss);
            int y=hex_dec(ss1);

            int len1=ss.length();
            int len2=ss1.length();
            if(len1==3)
            {
                cout<<"0";
            }
            else if(len1==2)
            {
                cout<<"00000";
            }
            else
            {
                cout<<"000000000";
            }
            for(i=0; i<len1; i++)
            {
                if(ss[i]>='0' && ss[i]<='9')
                {
                    cout<<ara[ss[i]-'0'];
                }
                else
                {
                    cout<<ara[ss[i]-55];
                }
            }
            cout<<" "<<ch<<" ";
            if(len2==3)
            {
                cout<<"0";
            }
            else if(len2==2)
            {
                cout<<"00000";
            }
            else
            {
                cout<<"000000000";
            }
            for(i=0; i<len2; i++)
            {
                if(ss1[i]>='0' && ss1[i]<='9')
                {
                    k=ss1[i]-48;
                    cout<<ara[k];

                }
                else
                {
                    cout<<ara[ss1[i]-55];
                }
            }
            cout<<" = ";
            if(ch=='+')
            {
                cout<<x+y<<endl;
            }
            else
                cout<<x-y<<endl;
        }
    }
    return 0;
}
