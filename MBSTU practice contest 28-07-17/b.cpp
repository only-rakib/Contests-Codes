#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test,n,m,i,j,sum;
    long long ara[100000];
    cin>>test;
    while(test--)
    {
        cin>>m>>n;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        int left=0;
        int right=0;
        sum=0;
        while(right<n)
        {
            sum+=ara[right];
            cout<<" :: "<<sum<<endl;
            if(sum%m==0)
            {
                cnt++;
            }
            if(right==n-1)
            {
                while(left<n)
                {
                    sum-=ara[left];
                   cout<<"++> "<<sum<<endl;
                    if(sum%m==0)
                    {
                        cnt++;
                    }
                    left++;
                }
            }
            right++;
        }
        cout<<cnt<<endl;
    }
}
