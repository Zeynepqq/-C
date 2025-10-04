#include<stdio.h>
int main()
{
	int A[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j)A[i][j] = 1;
			else A[i][j] = 0;
			printf("%3d", A[i][j]);

		}
		printf("\n");

	}
	return 0;

}