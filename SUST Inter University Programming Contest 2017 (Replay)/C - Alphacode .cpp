#include<bits/stdc++.h>
using namespace std;
int strnum(string s)
{
    int len=s.length();
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum=(sum*10)+(s[i]-'0');
    }
    return sum;
}
int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0")
            break;
        int i,l,j,len;
        len=s.length();
        string temp;
        int cnt=0;
        for(i=0;i<len-1;i++)
        {
            temp=s.substr(i,i+2-i);
            cout<<temp<<endl;
            if(strnum(temp)>=1 && strnum(temp)<=26)
            {
                cnt++;
            }
        }
        cnt++;
        cout<<cnt<<endl;
    }
}
