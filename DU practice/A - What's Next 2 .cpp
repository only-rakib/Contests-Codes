#include<bits/stdc++.h>
using namespace std;

double pow(int a, int b)
{
	if(b == 0) return 1;
	if(b == 1) return a;

	double t = pow(a, b/2);
	return t * t * pow(a, b%2);
}

int main()
{ 
	int a, b, c;


	while(cin >> a >> b >> c)
	{
		if(a == 0 && b==0 &&c==0)
			break;
		if(2*b == (a + c))
		{
			//printf("AP %d",2*c–b);
			cout<<"AP "<<2*c-b<<endl;
		}
		else
			cout << "GP " << (double)(a) * pow(b/a, 3) << endl;
	}
	return 0;
}