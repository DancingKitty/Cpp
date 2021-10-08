#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],m,n;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		cin>>a[i][j];
	}
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(a[i][j]==1)
			{
				m=i;
				n=j;
			}
		}
	}
	if(m==2 && n==2)
	cout<<"0";
	else if((m==1 && n==1)||(m==1 && n==3)||(m==3 && n==1)||(m==3 && n==3))
	cout<<"2";
	else if((m==1 && n==2)||(m==2 && n==1)||(m==3 && n==2)||(m==2 && n==3))
	cout<<"1";
	else if((m==0 && n==0)||(m==0 && n==4)||(m==4 && n==0)||(m==4 && n==4))
	cout<<"4";
	else if((m==0 && n==2)||(m==2 && n==0)||(m==4 && n==2)||(m==2 && n==4))
	cout<<"2";
	else if((m==0 && n==1)||(m==0 && n==3)||(m==1 && n==0)||(m==3 && n==0)||(m==4 && n==1)||(m==4 && n==3)||(m==1 && n==4)||(m==3 && n==4))
	cout<<"3";
}
