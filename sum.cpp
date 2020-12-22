// sum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	int n, x, m = 0;
	cout << "Input x:";
	cin >> x;
	cout << "Input n:";
	cin >> n;
	int k = 0;
	int a = 0;
	double S = 0, e = 1e-6;
	do
	{
		double l = 1, m = 1;
		for (int i = 1; i <= 2 * k + 1; ++i)
		{
			l *= x;
			m *= i;
		}
		double sum = l / m;
		if (k % 2 != 0) sum *= -1;
		S += sum;
		k++;
		a++;
	} while (k <= n && (S >= e || S <= -e));
	cout << "Sum = " << S << endl;
	cout << "Number of addends = " << a << endl;
}