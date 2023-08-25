#include <iostream>

using namespace std;

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