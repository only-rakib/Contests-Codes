#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,d,mx,mn;
    cin>>y>>w;
    mx=max(y,w);
    mn=6-mx;
    if(mn==0)
    {
        cout<<"0/1"<<endl;
    }
    else if(mn==1)
    {
        cout<<"1/1"<<endl;
    }
    else
    {
        cout<<"1/"<<mn<<endl;
    }
}
