#include <stdio.h>

void towersOfHanoi(int n, char from_rod, char to_rod, char aux_rod);

int main() {
	int n;
	printf("Enter the number of disks: ");
	scanf("%d", &n);
	towersOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are the names of the rods

	return 0;
}

void towersOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{
	if (n == 1)
	{
		printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
		return;
	}
	towersOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
	towersOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}