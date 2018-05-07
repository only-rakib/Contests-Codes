#include<bits/stdc++.h>
using namespace std;
#define mx 10000009
long long N=10000009 ;
bool arr[mx+5];
void seive()
{
	memset(arr,true,sizeof(arr));
	for( long long i = 2 ; i*i < 10000009 ; i++ )
	{
		if(arr[i]==true )
		{
			for( long long j = i*2 ; j < 10000009 ; j+=i )
			{
				arr[j] = false ;
			}
		}
	}
	arr[0] = arr[1] = false ;
}
long long str_num(string s)
{
	int len=s.length();
	long long sum=0;
	for(int i=0;i<len;i++)
	{
		sum=(sum*10)+(s[i]-'0');
	}
	return sum;
}
long long ch_num(char ch)
{
	
	long long sum=ch-'0';
	
	return sum;
}
int main()
{
	seive();
	int test;
	string s;
	cin>>test;
	while(test--)
	{
		vector<long long> v;
		string ss;
		cin>>s;
		int cnt=0;
		if(arr[str_num(s)]==true)
			cnt++;
		for(long long i=0;i<s.length();i++)
		{
			long long num=ch_num(s[i]);
			if(arr[num]==true)
				cnt++;
		}
		for(int i=0;i<s.length();i++)
		{
			for(int j=0;j<s.length();j++)
			{
				if(j==i)continue;
				ss=s.substr(i,j);
				if(arr[str_num(ss)]==true){cnt++;}
				while(next_permutation(ss.begin(),ss.end()))
				{
					long long num = str_num(ss);
					if(arr[num]==true)
					{
						cnt++;
					}
				}
			}
		}
		
		while(next_permutation(s.begin(),s.end()))
		{
			long long num = str_num(s);
			if(arr[num]==true)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
