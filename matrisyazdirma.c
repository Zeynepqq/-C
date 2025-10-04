#include<stdio.h>
int main()
{
	int A[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("A[%d][%d]:", i, j);
			scanf_s("%d", &A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for (int i = 0; i < 2; i++) {
		for (int j=0;j<2;j++) {
			printf("%2d", A[i][j]);

		}
		printf("\n");
	}
	return  0;

}