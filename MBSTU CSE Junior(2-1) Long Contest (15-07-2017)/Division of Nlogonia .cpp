#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long q,a,b,x,y;
    while(cin>>q)
    {
        if(q==0) break;
        cin>>a>>b;
        while(q--)
        {
            cin>>x>>y;
            if(x==a || y==b)
                cout<<"divisa"<<endl;
            else if(x>a && y>b)
                cout<<"NE"<<endl;
            else if(x>a && y<b)
                cout<<"SE"<<endl;
            else if(x<a && y>b)
                cout<<"NO"<<endl;
            else
                cout<<"SO"<<endl;
        }
    }
    return 0;
}
