#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,cnt=0;
    cin>>n;
    int root=sqrt(n);

    for(i=1;i<=root;i++)
    {
        for(j=i+1;i*j<=n;j++)
        {
            cnt++;
        }
    }
    cnt+=root;
    cout<<cnt<<endl;
}
