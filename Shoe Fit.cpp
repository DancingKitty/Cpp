#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
	int a,b,c;
	cin>>a>>b>>c;
	if(a==0 && b==0 && c==0)
	cout<<"0\n";
	else if(a==1 && b==1 && c==1)
	cout<<"0\n";
	else
	cout<<"1\n";
    }
}
