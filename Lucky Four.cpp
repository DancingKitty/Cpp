#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int num, c=0,result,ld;
	    cin>>num;
	    while(num!=0){
	        ld = num%10;
	        if(ld==4)
	        {
	            c++;
	        }
	        num=num/10;
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
