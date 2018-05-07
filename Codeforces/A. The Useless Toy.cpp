#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["^"]=1;
    mp[">"]=2;
    mp["v"]=3;
    mp["<"]=4;
    string s,ss;
    cin>>s>>ss;
    int num;
    cin>>num;
    int pos=mp[s];
    num=num%4;
    cout<<num<<endl;
    if(mp[s]-num==mp[ss])
    {
        cout<<"ccw"<<endl;
    }
    if(mp[s]+num==mp[ss])
    {
        cout<<"cw"<<endl;
    }
    main();
}
