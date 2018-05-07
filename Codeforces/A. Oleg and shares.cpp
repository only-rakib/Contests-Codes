/**
	Problem Name:A. Oleg and shares
	OJ:Codeforces
	Category:
	Author :Rakibul Hasan
	(Dept. CSE,MBSTU)
	Date :23-4-16

*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
typedef long long ll;
int main()
{
    ///freopen(".txt","r",stdin);
    ///freopen(".txt","w",stdout);
    ll ara[100009];
    ll n,k,i,j=0,l,m=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=1; i<n; i++)
    {
        while(ara[i]>ara[0])
        {
            ara[i]=ara[i]-k;
            m++;
            ///cout<<m<<endl;
        }
        if(ara[i]!=ara[0])
        {
            j=1;
            break;
        }
    }

       /* if(j==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<m<<endl;
        }*/
        ///cout<<1%100<<endl;

    ///return main();
}
