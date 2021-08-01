#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
for(int i=0; i<n; i++)
{
	int a,b;
	cin>>a>>b;
	
	int count =0;
	
	while(true)
	{
		a=a/b;
		
		count++;
		
		if(a==0)
		break;
	}
	
	cout<<count<<"\n";
}

}
