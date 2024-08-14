#include<iostream>
using namespace std;

int main ()
{
	cout<<"请输入两个数"<<endl;
	int a,b;
	cin>>a>>b;
	while(a!=b)
		if (a>b)
		a=a-b;
		else
		b=b-a;
	cout<<a<<endl;
	
		
	return 0;
	
}
