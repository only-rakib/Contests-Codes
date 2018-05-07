#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m;
    char str[10000];
    cin>>l>>str;
    int sum=0;
    int zeros=0;
    for(i=0; i<l; i++)
    {
        if(str[i]=='1')
        {
            sum+=(str[i]-'0');
            zeros=0;
        }
        else if(str[i]=='0')
        {
            zeros++;
            if(zeros==1)
            {
                cout<<sum;
                sum=0;
            }
            else
            {
                cout<<sum;
            }
        }
    }
    cout<<sum<<endl;
    //main();
}
