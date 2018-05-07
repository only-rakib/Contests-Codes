#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,kount=0;
    string s,str;
    int visited[1000];
    memset(visited,0,sizeof(visited));
    cin>>s;
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]=='V' && s[i+1]=='K')
        {
            kount++;
            s[i]='0';
            s[i+1]='0';
        }
    }
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]=='0')
        {
            continue;
        }
        if((s[i]=='K' && s[i+1]=='K') || (s[i]=='V' && s[i+1]=='V'))
        {
            kount++;
            break;
        }
    }
    cout<<kount<<endl;
    return 0;
    //main();
}
