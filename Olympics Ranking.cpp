#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int a[6];
	for(int i=0; i<6; i++)
	cin>>a[i];
	if((a[0]+a[1]+a[2])>(a[3]+a[4]+a[5]))
	cout<<"1\n";
	else
	cout<<"2\n";
	}
}
