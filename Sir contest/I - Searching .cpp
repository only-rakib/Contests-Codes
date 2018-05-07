#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,test;
    cin>>test;
    for(int kase=1; kase<=test; kase++)
    {
        map<string,int>mp;
        map<string,int> :: iterator it;
        string temp,name;
        cin>>n>>m;
        getchar();
        int num=1;
        while(n--)
        {
            cin>>temp;
            mp[temp]=num++;
        }
        cout<<endl;
        while(m--)
        {
            cin>>name;
            if(mp[name]!=0)
            {
                cout<<"yes"<<endl;
            }
            else
            {
                int mn=9999999;
                for(it=mp.begin(); it!=mp.end(); it++)
                {
                    int mmatch=0;
                    temp=it->first;
                    if(name.length()!=temp.length())
                        continue;
                    for(int j=0; j<temp.length(); j++)
                    {
                        if(name[j]==temp[j]  )
                        {
                            continue;
                        }
                        else
                            cout<<mmatch++<<endl;
                    }
                    mn=min(mn,mmatch);
                }
                //cout<<mn<<endl;
                if(mn==1)
                {
                    cout<<"yes"<<endl;
                }
                else
                    cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
