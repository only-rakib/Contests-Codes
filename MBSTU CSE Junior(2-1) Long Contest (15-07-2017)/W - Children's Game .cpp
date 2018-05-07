#include<bits/stdc++.h>
using namespace std;
bool compare(string s1,string s2)
{
    if(s1+s2>s2+s1)
        return true;
    else
        return false;
}
int main()
{
    int n;
    while(cin>>n,n>0)
    {
        string ss[n+9];
        int i,j,k;
        for(i=0;i<n;i++)
            cin>>ss[i];
        sort(ss,ss+n,compare);
        for(i=0;i<n;i++)
            cout<<ss[i];
        cout<<endl;
    }
    return 0;
}
