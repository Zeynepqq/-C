#include<stdio.h>
int main()
{
	int n, F, i;
	F = 1;
	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		F = F * i;
	}
	printf("\n%d!=%d\n", n , F);

	return 0;
}