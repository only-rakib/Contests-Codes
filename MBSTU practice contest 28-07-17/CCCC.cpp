#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {
        int z=sqrt(N)+1;
        int cnt=0;
        if(N==0)
        {
            cnt=1;
        }
        else
        {
            for(int a=0; a<=z; a++ )
            {
                for(int b=0; b<=z; b++)
                {
                    double c = ((5.0*N)-(36.0*a*a)-(18.0*b*b))/6.0;
                    // printf("%lf ",c);
                    if(c>=0)
                    {
                        //cout<<c<<" ";
                        c=sqrt(c);
                        int r=c;
                        if(r==c)
                        {
                            cnt++;
                            //cout<< a << " " <<b<<" "<<c<<endl;
                        }
                    }
                }
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}

