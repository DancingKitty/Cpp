#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	long n;
	cin>>n;
	if(n==0 || (n%10)==0)
	cout<<"0\n";
	else if((n%5)==0)
	cout<<"1\n";
	else
	cout<<"-1\n";
	}
}
