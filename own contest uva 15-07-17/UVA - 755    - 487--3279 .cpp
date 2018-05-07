#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
map<string,int> :: iterator it;
string str[100009],store;
int ara[]= {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9,0};
int main()
{
    int i,j;
    int t,z,k,l,m,n;
    cin>>t;
    getchar();
    while(t--)
    {
        mp.clear();
        cin>>n;
        k=0;
        for(i=0; i<n; i++)
        {
            store.clear();
            cin>>str[i];
            for(j=0; j<str[i].length(); j++)
            {
                if(str[i][j]>='A' && str[i][j]<='Z')
                {
                    store.push_back(ara[str[i][j]-65]+'0');
                }
                else if(str[i][j]>='0' && str[i][j]<='9')
                {
                    store.push_back(str[i][j]);
                }
            }
            store.insert(store.begin()+3,'-');
           // cout<<store<<endl<<endl;
            mp[store]++;
        }
        l=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            k=it->second;
            if(k!=1)
            {
                cout  <<it->first <<" "<< it->second << '\n';
                l=1;
            }
        }
        if(!l)
        {
            cout<<"No duplicates."<<endl;
        }
        if(t)
        {
            cout<<endl;
        }
    }
}
