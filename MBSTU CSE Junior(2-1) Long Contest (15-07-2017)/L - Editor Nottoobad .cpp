#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,j,k,n;
    string str[1009];
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>str[i];
        }
        int l=n-1;
        ///int mn=999999;
        sort(str,str+n);
        int cnt=str[0].length();
        for(i=1; i<n; i++)
        {
            ///int flag=1;
            for(j=0; j<str[i].length(); j++)
            {
                if(str[i-1][j]==str[i][j])
                    continue;
                ///New handle string i-1 len
                else if(str[i-1][j]!=str[i][j] )
                    break;
            }
            cnt+=(str[i].length()-j);
        }
        ///cout<<cnt<<endl;
        cout<<cnt<<endl;
        for(int x=0; x<n; x++)
            cout<<str[x]<<endl;
    }
    return 0;
}

