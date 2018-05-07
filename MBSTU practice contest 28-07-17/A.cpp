#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prime , com ;
    while( cin >> prime >> com ){
        int cnt = 0 ;
        int nai=0;
        vector<int>num ;
        for( int i = 1 ; i < com ; i++ )
        {
            if( (i*i*i)%com==prime )
            {
                cnt++ ;
                num.push_back(i) ;
            }
        }
        if( cnt!=0 )
        {
            for( int i =0 ; i < num.size() ; i++ )
            {
                cout<<num[i] ;
                if( i!=num.size()-1)
                    cout<<" " ;
            }
            cout<<endl ;
        }
        else
            cout<<endl ;
    }
    return 0;
}
