#include<iostream>
#include<cmath>
using namespace std
#define pi = 3.14159;
int main()
{
	int ans;
	cin >> ans;
	double value = cos(ans);
	double y = sqrt((1 - value) / 2.0);
		cout << y;
}