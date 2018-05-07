#include<bits/stdc++.h>
using namespace std;
long long digit(long long num)
{
    long long sq=0,sum,n;
    n=num;
    while(num!=0)
    {
        sum=num%10;
        sq+=(sum*sum);
        num/=10;
    }
    if(sq==1)
        return n;
    return sq;
}
int main()
{
    long long a,b,c,d,s;
    map<long long,int>num;
    while(cin>>a>>b)
    {
        map<long long,int>mp;
        map<long long,int>::iterator it;
        if(b<a)
        {
            c=b;
            d=a;
        }
        else
        {
            c=a;
            d=b;
        }
        for(long long i=c; i<=d; i++)
        {
            s=i;
            while(1)
            {
                if(s<10)
                {
                    s=s*s;
                    if(mp[s]==0)
                        mp[s]++;
                    else
                    {
                        num[s]++;
                        break;
                    }
                }
                else
                {
                    s=digit(s);
                    if(mp[s]==0)
                        mp[s]++;
                    else
                    {
                        num[s]++;
                        break;
                    }
                }
                //cout<<s<<endl;
            }
            mp.clear();
        }
        int cnt=0;
        for(it=num.begin();it!=num.end();it++)
        {
            if(it->second>1)
                cnt++;
        }
        cout<<cnt<<endl;
        num.clear();
    }

}
