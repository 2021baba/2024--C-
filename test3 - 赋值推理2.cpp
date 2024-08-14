#include<iostream> 
using namespace std;

int main()
{
	/*int a,b,c,d; 
	a=1; b=2; c=3;
	cout<<a<<","<<b<<","<<c<<", "<<d<<endl;
	d=a;	a=b;	b=c;	c=d;//d=1,a=2,b=3,c=1
	cout<<a<<","<<b<<","<<c<<", "<<d<<endl;
	return 0;*/
	
	/*int a,b,c,d; 
	a=1; b=2; c=3;
	cout<<a<<","<<b<<","<<c<<", "<<d<<endl;
	d=c;	c=b; 	b=a; 	a=d;//d=3,c=2,b=1,a=3
	cout<<a<<","<<b<<","<<c<<", "<<d<<endl;
	return 0;*/
	
	/*int a,b,c; 
	a=1; b=3; c=7;
	cout<<a<<","<<b<<","<<c<<endl;
	a=a+b+c;//a=11
	b=a-b-c;//b=1
	c=a-b-c;//c=3
	a=a-b-c;//a=7
	cout<<a<<","<<b<<","<<c<<endl;
	return 0;*/
	
	int a,b,c; 
	a=1; b=3; c=7;
	cout<<a<<","<<b<<","<<c<<endl;
	a=a+b+c;//a=11
	c=a-b-c;//c=1
	b=a-b-c;//b=7
	a=a-b-c;//a=3
	cout<<a<<","<<b<<","<<c<<endl;
	return 0;



}
