#include <stdio.h>
#include <stdlib.h>

int exponent(int base, int power);

int main(void)
{
	int a, b;
	printf("Enter base number: ");
	scanf("%d", &a);
	printf("Enter power number: ");
	scanf("%d", &b);

	printf("power(%d, %d)= %d", a, b, a);

	int i = b;
	
	while (i>1)
	{
		printf(" * %d", a);
		i--;
	}

	printf(" = %d\n", exponent(a, b));
	return 0;
}

int exponent(int base, int power)
{
	int i= base;

	while (power > 1)
	{
		base = base * i;
		power--;
	}

	return base;
}