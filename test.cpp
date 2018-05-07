#include<bits/stdc++.h>
using namespace std

int main()
{
	int test,k,i,q,j,l,kase;
	string ss,s,sss,str;
	char ch,ka;
	cin>>test;
	for(kase=1;kase<=test;kase++)
	{
		s="";
		cin>>ss;
		cin>>q;
		while(q--)
		{
			cin>>ch>>ka>>k;
			if(ch=='R')
			{
				for(i=0;i<k;i++)
				{
					s=s+ka;
				}
				ss=ss+s;
				sss=ss;
				str=ss;
				s="";
			}
			else
			{	
				for(i=0;i<k;i++)
				{
					s=s+ka;
				}
				s=s+ss;
				sss=s;
				str=s;
				s="";
			}
			reverse(str.begin(),str.end());
			if(str==sss)
				cout<<"Yes"<<ensl;
			else
				cout<<"NO"<<endl;
			
		}
	}
}