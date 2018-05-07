#include<bits/stdc++.h>
using namespace std;
int int_log(int base,int x)
{
    return (int)(log(x)/log(base));
}
int main()
{
    int N,b;
    cin>>b>>N;
    int n= (1+int_log(b,N))/(1+(log(N)/log(b)));
    cout<<n<<endl;
}
