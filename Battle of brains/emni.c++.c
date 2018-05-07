#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int n= 1+log(N)/(1+(log(N)/log(2)));
    cout<<n<<endl;
}
