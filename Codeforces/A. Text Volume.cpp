#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int emni;
    cin>>emni;
    getchar();
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string temp;
    int mx=0;

    while(ss>>temp)
    {
        int cnt=0;
        int len=temp.length();
        for(int i=0;i<len;i++)
        {
            if(temp[i]>='A' && temp[i]<='Z')
                cnt++;
        }
        mx=max(cnt,mx);
    }
    cout<<mx<<endl;
    //main();
}
