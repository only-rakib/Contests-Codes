#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  Z,I,M,L,sum=0,pseu=0,first,next;
    while(cin>>Z>>I>>M>>L)
    {
        cout<<"Case "<<++pseu<<": ";
        if(Z==0 && I==0 && M==0 && L==0) break;
        sum=0;
        first=L;
        first=(Z*first+I)%M;
        L=first;
        while(1)
        {
            first=(Z*first+I)%M;
            sum++;
            if(L==first)
            {
                cout<<sum<<endl;
                break;
            }
        }
    }
    return 0 ;
}
