#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>> "输入建国攒的钱数" >> a;
    a = a * 1.0275 * 1.0275 * 1.0275;
    cout << "捐款金额为：" << a;
    return 0;
}

