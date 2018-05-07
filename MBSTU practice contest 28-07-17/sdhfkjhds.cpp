#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long n , m , t;
    cin >> t ;
    while( t-- )
    {
        cin >> n >> m ;
        long long arr[m+1] ;
        for( int i = 0 ; i < m ; i++ )
        {
            cin >> arr[i] ;
        }
        int cnt = 0 ;
        long long sum = 0 ;
            for( int j = i ; j < m ; j++ )
            {
                sum += arr[j] ;
                if( sum%n==0 )
                    cnt++ ;
            }
        }
        cout << cnt << endl ;
    }
    return 0 ;
}
