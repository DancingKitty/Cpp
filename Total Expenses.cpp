#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int a,b;
	cin>>a>>b;
	double c = (0.9)*a*b;
	double d = (a*b);
	if(a>1000)
	printf("%.6lf\n",c);
	else
	printf("%.6lf\n",d);
	}
}
