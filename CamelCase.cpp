#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int a,count=0;
	getline(cin,s);
	a = s.length();
	for(int i=0; i<a; i++)
	{
		if(s[i]=='A'||s[i]=='B'||s[i]=='C'||s[i]=='D'||s[i]=='E'||s[i]=='F'||s[i]=='G'||s[i]=='H'||s[i]=='I'||s[i]=='J'||s[i]=='K'||s[i]=='L'||s[i]=='M'||s[i]=='N'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z')
		count++;
	}
	cout<<(count+1);
}
