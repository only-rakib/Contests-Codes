#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test,k,i,q,j,l,kase;
	char ss[10000],s[10000],sss[10000],str[10000];
	char ch,ka;
	cin>>test;
	getchar();
	for(kase=1;kase<=test;kase++)
	{
		s="";
		cin>>ss;
		cin>>q;
		getchar();
		printf("Case %d:\n",kase);
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
				ss=s;
				sss=ss;
				str=ss;
				s="";
			}
			int len=sss.length()-1;
			int flg=0;
			for(i=0;i<=len/2;i++)
            {
                if(sss[i]!=str[len-i])
                    flg=1;
            }

			if(flg)
				cout<<"No"<<endl;
			else
				cout<<"Yes"<<endl;

		}
	}
}
