#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	int a[5];
	for(int i=0; i<5; i++)
	cin>>a[i];
	sort(a,a+5);
	cout<<a[2]<<"\n";
	}
}
