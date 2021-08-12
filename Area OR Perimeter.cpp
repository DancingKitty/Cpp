#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if((a*b)>(2*(a+b)))
	{
	cout<<"Area\n";
	cout<<(a*b)<<"\n";
	}
	else if((a*b)<(2*(a+b)))
	{
	cout<<"Peri\n";
	cout<<(2*(a+b))<<"\n";
	}
	else
	{
	cout<<"Eq\n";
	cout<<(a*b)<<"\n";
	}
}
