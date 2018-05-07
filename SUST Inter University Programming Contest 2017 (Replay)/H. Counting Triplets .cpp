#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long > V;
    //vector<long long > Vum;
    int test,kase,i,j,k,n;
    cin>>test;
    for(kase=1; kase<=test; kase++)
    {
        cin>>n;
        long long num;
        for(i=0; i<n; i++)
        {
            cin>>num;
            V.push_back(num);
            //Vum.push_back(-1*num);
        }
        int sum,cnt=0;
        sort(V.begin(),V.end());
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                sum=V[i]+V[j];
                if(binary_search(V.begin(),V.end(),sum))
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
