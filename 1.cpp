#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,z,area;
	cin>>x>>y>>z;
	if(x+y>z&&x+z>y&&y+z>x)
	{
		if(x==y||x==z||y==z)
		{if(x==y==z)
		cout<<"等边三角形";
		else if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==y*y+x*x)
		cout<<"等腰直角三角形";
		else
		cout<<"等腰三角形";
		}
		else if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==y*y+x*x)
		cout<<"直角三角形";
		else
		cout<<"一般三角形";
	}
	else
	cout<<"不构成三角形";
	return 0;
}
