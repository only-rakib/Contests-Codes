#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m,p;
    string s,temp;
    map<string,int>mp;
    map<string,int>::iterator it;
    while(cin>>n)
    {
        cin>>s;
        l=s.length();
        for(i=0; i<l; i++)
        {
            temp=s.substr(i,n);
            //cout<<temp<<endl;
            if(temp.length()==n)
            {
                mp[temp]++;
            }
        }
        int mx=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            int p=it->second;
            if(p>mx)
            {
                mx=p;
                temp=it->first;
            }
        }
        cout<<temp<<endl;
        mp.clear();
    }
    return 0;
}
