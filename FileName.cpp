#include<iostream>
using namespace std;
int main()
{

	int i,sum=1;
	long long j;
	j = 1;
	for (i = 1; i <= 10; i++)
	{
		j *= i;
		sum += j;
	}
	cout << sum;
}

//这是一段代码为了实现阶乘求和