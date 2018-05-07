#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000005
int main ()
{
    ll i,j,n,m,tc,t,p,q,y,a[11][11],b[11][11],w,cnt,st;

    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        cin>>n;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                cin>>a[i][j];

            }
        }
        cnt=0;
        printf("Case %lld: ",t);
        if (n>=5)
        {
           for (i=0;i<n-1;i++)
           {
               for (st=0;st+5<=n;st++)
               {

               p=1;
               map<int,int>mp;
               for (j=st;j<n;j++)
               {
                   mp[a[i][j]]++;
                   mp[a[i+1][j]]++;


               }
               for (j=1;j<=10;j++)
               {
                   if (mp[j]!=1)
                   {
                       p=0;
                       break;
                   }
               }
               if (p==1)
                cnt++;
               }
           }
           for (i=0;i<n-1;i++)
           {
               for (st=0;st+5<=n;st++)
               {

               p=1;
               map<int,int>mp;
               for (j=st;j<n;j++)
               {
                   mp[a[j][i]]++;
                   mp[a[j][i+1]]++;

               }
               for (j=1;j<=10;j++)
               {
                   if (mp[j]!=1)
                   {
                       p=0;
                       break;
                   }
               }
               if (p==1)
                cnt++;
               }
           }
           if (n==10)
           {

                     for (i=0;i<n;i++)
                     {
                         p=1;
                         map<int,int>mp;
                         for (j=0;j<n;j++)
                         {
                             mp[a[i][j]]++;
                         }
                         for (j=1;j<=10;j++)
                         {
                             if (mp[j]!=1)
                             {
                                 p=0;
                                 break;
                             }
                         }
                         if (p==1)
                            cnt++;
                     }
                     for (i=0;i<n;i++)
                     {
                         p=1;
                         map<int,int>mp;
                         for (j=0;j<n;j++)
                         {
                             mp[a[j][i]]++;
                         }
                         for (j=1;j<=10;j++)
                         {
                             if (mp[j]!=1)
                             {
                                 p=0;
                                 break;
                             }
                         }
                         if (p==1)
                            cnt++;
                     }
           }
           cout<<cnt<<endl;
        }
                 else
                    cout<<"0"<<endl;


    }
    return 0;

}

