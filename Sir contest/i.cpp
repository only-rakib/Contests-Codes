#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,kase,i,j,test;
    string s[1000];
    string temp,name;
    cin>>test;
    for(kase=1; kase<=test; kase++)
    {
        printf("Case #%d:\n",kase);
        cin>>n>>m;
        int ar[10000];
        getchar();
        for(i=0; i<n; i++)
        {
            cin>>s[i];
        }
        while(m--)
        {
            cin>>name;
            int flg=0;
            for(i=0; i<n; i++)
            {
                if(s[i]==name)
                {
                    flg=1;
                    break;
                }
            }
            if(flg)
                cout<<"yes"<<endl;
            if(flg==0)
            {
                int l=0;
                int mn=9999999;
                for(i=0; i<n; i++)
                {
                    int ma=0;
                    if(s[i].length()!=name.length())
                        continue;
                    for(j=0; j<name.length(); j++)
                    {
                        if(name[j]!=s[i][j])
                        {
                            ma++;
                        }
                    }
                    mn=min(ma,mn);
                    ar[l++]=mn;
                }
                int cnt=0;
                for(int i=0; i<l; i++)
                {
                    if(ar[i]==1)
                        cnt++;
                }
                if(cnt==1)
                    cout<<"yes"<<endl;
                else
                    cout<<"no"<<endl;
            }

        }
    }
}
