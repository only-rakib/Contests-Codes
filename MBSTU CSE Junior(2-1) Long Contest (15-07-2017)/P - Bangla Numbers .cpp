#include<bits/stdc++.h>
using namespace std;
#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100

int main()
{

    long long n,i,j,m,kase=0;
    while(cin>>n)
    {
        ++kase;
        if(kase<10)
        cout<<"   "<<kase<<".";
        else if(kase<100)
            cout<<"  "<<kase<<".";
        else if(kase<1000)
            cout<<" "<<kase<<".";
        else
            cout<<kase<<".";
        if(n==0)
        {
            cout<<" "<<0<<endl;
            continue;
        }
        if(n>=kuti)
        {
            m=n/kuti;
            if(m>=kuti)
            {
                cout<<" "<<m/kuti<<" kuti";
                m=m%kuti;
            }
            if(m>=lakh)
            {
                cout<<" "<<m/lakh<<" lakh";
                m=m%lakh;
            }
            if(m>=hajar)
            {
                cout<<" "<<m/hajar<<" hajar";
                m=m%hajar;
            }
            if(m>=shata)
            {
                cout<<" "<<m/shata<<" shata";
                m=m%shata;
            }
            if(m>0)
            {
                cout<<" "<<m;
                m=0;
            }
            cout<<" kuti";
            n=n%kuti;
        }
        if(n>=lakh)
        {
            cout<<" "<<n/lakh<<" lakh";
            n=n%lakh;
        }
        if(n>=hajar)
        {
            cout<<" "<<n/hajar<<" hajar";
            n=n%hajar;
        }
        if(n>=shata)
        {
            cout<<" "<<n/shata<<" shata";
            n=n%shata;
        }
        if(n>0)
        {
            cout<<" "<<n;
            n=0;
        }
        cout<<endl;
    }
}
