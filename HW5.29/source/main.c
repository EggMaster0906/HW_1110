#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int list[3], i;
	printf("Enter two numbers: ");
	scanf("%d %d", &list[1], &list[2]);

	if (list[1] < list[2])
	{
		list[0] = list[2];
		list[2] = list[1];
		list[1] = list[0];
	}

	int GCD = 1;

	for (int i = 2; i <= list[2]; i++) 
	{
		if (list[1] % i == 0 && list[2] % i == 0) 
			GCD = i;
	}

	printf("GCD of the numbers is: %d", GCD);

	return 0;
}
