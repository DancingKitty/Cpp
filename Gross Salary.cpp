#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	double a;
	cin>>a;
	if(a>=1500)
	{
		double c = (a+500+(0.98*a));
		printf("%.2lf\n",c);
	}
	else if (a<1500)
	{
		double d = (a+(0.1*(a))+(0.9*a));
		printf("%.2lf\n",d);
	}
	}
	
}
