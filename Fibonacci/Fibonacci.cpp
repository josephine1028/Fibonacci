#include <iostream>

using namespace std;

int fibo_memo[50] = {0};

long long fibo_long_memo[100] = { 0, 1 };

long long Fibo_While(int n)
{
	for (int i = 2; i <= n; i++)
	{
		fibo_long_memo[i] = fibo_long_memo[i - 1] + fibo_long_memo[i - 2];
	}
	return fibo_long_memo[n];
}

int Fibo_Dynamic(int n)
{
	if (n <= 1)
		return n;
	else if(fibo_memo)
		return fibo_memo[n];
	else
		return fibo_memo[n] = Fibo_Dynamic(n-1) + Fibo_Dynamic(n-2);
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