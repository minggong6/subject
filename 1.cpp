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
		cout<<"�ȱ�������";
		else if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==y*y+x*x)
		cout<<"����ֱ��������";
		else
		cout<<"����������";
		}
		else if(x*x==y*y+z*z||y*y==x*x+z*z||z*z==y*y+x*x)
		cout<<"ֱ��������";
		else
		cout<<"һ��������";
	}
	else
	cout<<"������������";
	return 0;
}
