#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    s1.erase (remove(s1.begin(), s1.end(), ' '), s1.end());
    cout<<s1<<endl;
}
