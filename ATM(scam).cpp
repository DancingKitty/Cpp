#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	float b;
	cin>>a;
	scanf("%f",&b);
	if((a%5)==0)
	{
		if(b>=(a+0.5))
		{
			float c;
			c=(b-a)-0.5;
			printf("%.2f",c);
		}
		else
		printf("%.2f",b);
		
	}
	else
	printf("%.2f",b);
}

