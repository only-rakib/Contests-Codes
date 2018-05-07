#include<bits/stdc++.h>
using namespace std;
string s,ss;
int dp[2001][2001];
int func(int pos1,int pos2)
{

    if(pos1==0)
    {
        return pos2;
    }
    if(pos2==0)
    {
        return pos1;
    }
    if(dp[pos1][pos2]!=-1)
    {
        return dp[pos1][pos2];
    }
    if(s[pos1-1]==ss[pos2-1])
    {
        return func(pos1-1,pos2-1);
    }
    int x=func(pos1-1,pos2)+1;
    int y=func(pos1,pos2-1)+1;
    int z=func(pos1-1,pos2-1)+1;
    dp[pos1][pos2]=min(x,min(y,z));;
    return dp[pos1][pos2];
}
int main()
{
    int test,len1,len2;
    cin>>test;
    getchar();
    while(test--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>s>>ss;
        len1=s.length();
        len2=ss.length();
        int aa=func(len1,len2);
        cout<<aa<<endl;
    }
    return 0;
}
