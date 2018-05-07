#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int num=0,i,j,siz;
    cin>>s;
    siz=s.length();
    for(i=0, j=siz-1;i<=siz/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            num++;
        }
    }
    if(num==0)
    {
        if(siz%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else if(num==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    ///return main();
}
