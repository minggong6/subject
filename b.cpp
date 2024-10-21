#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double d;
	int a,b,c;
	cin>>c;
	a=c/100;
	b=c%100; 
	c=a%b;
	d=sqrt(a)/sqrt(b);
	cout<<a<<"   "<<b<<endl; 
	printf("%.2f\n",d);
	cout<<c; 
	return 0;
}
