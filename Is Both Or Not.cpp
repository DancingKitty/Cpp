#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if((n%5)==0 && (n%11)==0)
	cout<<"BOTH\n";
	else if((n%5)!=0 && (n%11)!=0)
	cout<<"NONE\n";
	else if((n%5)!=0 && (n%11)==0)
	cout<<"ONE\n";
	else if((n%5)==0 && (n%11)!=0)
	cout<<"ONE\n";
}
