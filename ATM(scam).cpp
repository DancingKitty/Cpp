#include<bits/stdc++.h>
using namespace std;
int main() 
{
	double y;
	int x;
	cin>>x>>y;
	double ans=y;
	if(x%5==0 && y-x-0.5>=0)
	ans=ans-x-0.5;
	cout<<ans<<endl;
}
