#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","w",stdout);
    string str[100000];
    long long low[100000],high[100000];
    int t,n,i,j,k,q;
    long long p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>str[i]>>low[i]>>high[i];
        }
        cin>>q;
        while(q--)
        {
            cin>>p;
            j=0;
            for(i=0;i<n;i++)
            {
                if(p>=low[i] && p<=high[i])
                {
                    j++;
                    k=i;
                }
            }
            if(j!=1)
            {
                cout<<"UNDETERMINED"<<endl;;
            }
            else
            {
                cout<<str[k]<<endl;
            }
        }
        if(t)
        {
            cout<<endl;
        }
    }
}
