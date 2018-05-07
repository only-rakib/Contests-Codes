#include <bits/stdc++.h>
using namespace std;
int  C [66000];
int A [67000];
int main ()
{
    int n, i, j, k;
    int X;

    a [1] = 1;
    J = 1;
    K = 2;
    for (i = 1; i <= 65537; i ++) // the positions of all 1's memory to array a;
    {
        a [K] = J + I;
        J = J + I;
        K ++;

    }
    Scanf ( "% D", & n-);
    for (I =. 1; I <= n-; I ++)
    {
        Scanf ( "% D", & X);

        C [I ] = search (x);
    }
    for the final result;
printf ("% d", c [i]);
    printf ("% dn", c [n]);
    return 0;
}
