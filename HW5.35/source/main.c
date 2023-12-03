#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int Num);

int main(void)
{
	while (1)
	{
		int n;

		printf("Enter the n term of the Fibonacci sequence, n=? ");
		scanf("%d", &n);

		printf("The number of Fibonacci sequence is: %d\n", fibonacci(n));

		system("pause");
	}
	return 0;
}

unsigned long long int fibonacci(unsigned int Num)
{
	unsigned long long int a = 0, b = 1, fib, Temp;
	
	if (Num > 2)
	{
		for (int i = 3; i <= Num; i++)
		{
			fib = a + b;
			Temp = a;
			a = b;
			b = fib;
		}
	}

	else if (Num == 2)
		fib = 1;
	else if (Num == 1)
		fib = 0;

	return fib;
}
