#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;
int main()
{
	double ans;
	cin >> ans;
	ans=ans/180.0*PI;
	double value = cos(ans);
	double y = sqrt((1 - value) / 2.0);
		cout <<"y="<<y;
		return 0;
}
