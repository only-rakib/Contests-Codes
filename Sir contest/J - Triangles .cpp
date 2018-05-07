#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100000];
    int test,n,l,r;
    cin>>test;
    for(int kase=1;kase<=test;kase++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        l=0,r=0;
        int sum=0,ans=0,cnt=0;
        while(r<n)
        {
            sum+=ara[r];
            if(sum-ara[l]>ara[l])
            {
                cnt++;
                if(sum-ara[l]+ara[l+1]==sum && n==l-1)
                {
                    cnt--;
                }
                sum-=ara[l];
                l++;
            }
            r++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
