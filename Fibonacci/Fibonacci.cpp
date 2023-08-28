#include <iostream>

using namespace std;

long long fibo_long_memo[100] = { 0, 1 };

long long Fibo_While(int n)
{
	for (int i = 2; i <= n; i++)
	{
		fibo_long_memo[i] = fibo_long_memo[i - 1] + fibo_long_memo[i - 2];
	}
	return fibo_long_memo[n];
}

int Fibo(int n)
{
	if (n <= 1)
		return n;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	int N, res;
	scanf_s("%d", &N);
	printf("%d", Fibo(N));

	system("pause");
	return 0;
}