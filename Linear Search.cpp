#include<bits/stdc++.h>
using namespace std;

int linearsearch(int a[],int n,int k)
{
	for(int i=0; i<n; i++)
	{
		if(a[i]==k) 
		{
			return i;
			break;
		}
	}
	return -1;
}

int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	cin>>k;
	int index=linearsearch(a,n,k);
	cout<<index;
}
