#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_neddle, char to_neddle, char aux_neddle)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from neddle %c toneddle %c", from_neddle, to_neddle);
		return;
	}
	towerOfHanoi(n-1, from_neddle, aux_neddle, to_neddle);
	printf("\n Move disk %d from neddle%c to neddle %c", n, from_neddle, to_neddle);
	towerOfHanoi(n-1, aux_neddle, to_neddle, from_neddle);
}

int main()
{
	int n = 4; // Number of disks
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of neddle







	return 0;
}
