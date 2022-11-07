#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double fib(double i);
double formula(double n, double k);
double ;

int fact(double i);

int C(int k, int n, int* ptrRes);

int main()
{
	double sum = 0;
	double n; int k; double Part(int n, int k);
	int res = 0;
	cout << "n = "; std::cin >> n;
	for (k = 0; k <= n / 2; k++)
	{
		C(k, n - k, &res);

	}
			int A;
	cout << fib(6) << '\n';
	cout << sum;
	cout << res;
}

double fib(double i)
{
	if (i <= 1)
		return i;
	else
		return fib(i - 1) + fib(i - 2);
}

int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * fact(n - 1);
}

int C(int k, int n, int *ptrRes)
{
	if (n == k || k == 0) return 1;
	*ptrRes += fact(n) / (fact(k) * fact(n - k));
	return C(k - 1, n - 1, ptrRes) + C(k, n - 1, ptrRes);
}