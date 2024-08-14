#include<iostream>
using namespace std;

int main ()
{
	int a=2*3*7*11*13*97, b=2*5*7*19*23;
	cout<<a<<","<<b<<endl;
	while(1)
	{
		int r=a%b;
		if(r==0)
			break;
		a=b;b=r;
		cout<<a<<","<<b<<endl;
		
	}
	cout<<b<<endl;
	return 0;
}
