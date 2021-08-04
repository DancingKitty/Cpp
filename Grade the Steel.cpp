#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	float a,b,c;
	cin>>a>>b>>c;
	if(a>50 && b<0.7 && c>5600)
	cout<<"10\n";
	else if(a>50 && b<0.7 && c<=5600)
	cout<<"9\n";
	else if(a<=50 && b<0.7 && c>5600)
	cout<<"8\n";
	else if(a>50 && b>=0.7 && c>5600)
	cout<<"7\n";
	else if(a>50 && b>=0.7 && c<=5600)
	cout<<"6\n";
	else if(a<=50 && b<0.7 && c<=5600)
	cout<<"6\n";
	else if(a<=50 && b>=0.7 && c>5600)
	cout<<"6\n";
	else if(a<=50 && b>=0.7 && c<=5600)
	cout<<"5\n";
	}
}
