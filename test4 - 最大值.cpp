#include<iostream>
using namespace std;

int main()
{
	int a,b,c,max;
	cout<<"������������"<<endl; 
	cin>>a>>b>>c;
	if (a>b)
		if (c>a)
			max=c;
		else
			max=a;
	else
		if (c>b)
			max=c;
		else
			max=b;
	
	cout<<"���ֵ��"<<max<<endl; 
	
	return 0;
 } 
