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
        int right=0,chk=0;
        sum=0;
        int rt;
        while(right<n)
        {
            sum+=ara[right];
            chk=sum;
            if(chk%m==0)cnt++;
            rt=right+1;
            left=0;
            while(rt<n)
            {
                chk=chk-ara[left]+ara[rt];
                if(chk%m==0)
                    cnt++;
                rt++;left++;
            }
            right++;
        }
        cout<<cnt<<endl;
    }
}

