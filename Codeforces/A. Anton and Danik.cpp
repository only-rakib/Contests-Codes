#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a=0,d,n;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
    }
    d=n-a;
    if(a==d)
    {
        cout<<"Friendship"<<endl;
    }
    else if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
    ///return main();
}
