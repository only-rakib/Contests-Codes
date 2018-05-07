#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6,i,j,k,l;
    cin>>k2>>k3>>k5>>k6;
    l=min(k5,k6);
    k=min(l,k2);
    int ans=k*256;
    k2=k2-k;
    j=min(k2,k3);
    int ans1=j*32;
    cout<<ans1+ans<<endl;
   /// return main();
}
