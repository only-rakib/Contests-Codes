#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y,z,v;
    char ch;
    int i,j,k=0,ok=0;
    cin>>x>>y;

    for(i=0; i<x.length(); i++)
    {
        if(x[i]>y[i])
        {
            z[k++]=y[i];
        }
        else if(x[i]<y[i])
        {
            z[k++]=x[i];
        }
        if(x[i]=='z' && y[i]=='z')
        {
            z[k++]='z';
        }
        else if(x[i]==y[i])
        {
            ch=x[i]+1;
            z[k++]=ch;
        }

    }
    int l=0;
    z[k]='\0';
    int nai=1;
    for(i=0; i<k-1; i++)
    {
        if(z[i]>x[i])
        {
            v[l++]=x[i];
        }
        else if(z[i]<x[i])
        {
            v[l++]=z[i];
        }
        else if(z[i]==x[i])
        {
            v[l++]='0';
        }
    }
    for(i=0;i<l;i++)
    {
        if(v[i]!=y[i])
        {
            nai=0;
            break;
        }
    }
    if(nai)
    {
        for(i=0; i<k; i++)
        {
            cout<<z[i];
        }

    }
    else
    {
        cout<<"-1";
    }
    cout<<endl;
    //main();
    return 0;
}

