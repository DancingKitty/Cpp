#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c)
	{
		if((a+c)>b)
		{
			if((b+c)>a)
			{
				if(a==c && a==b && b==c)
					cout<<"1";
				else if(a==c || a==b || b==c)
					cout<<"2";
				else if(a!=c && a!=b && b!=c)
					cout<<"3";
				else
					cout<<"-1";
			}
			else
				cout<<"-1";
		}
		else
			cout<<"-1";
	}
	else
		cout<<"-1";
}
