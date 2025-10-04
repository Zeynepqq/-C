#include<stdio.h>
int main()
{
	int f1, f2, temp, n, i;
	f1 = 0, f2 = 1 , temp= 0 ;
	printf(" fibonacci dizisinin terim sayisini giriniz:");
	scanf_s("%d", &n);
	printf("%d", f1);
	for (i = 1; i < n; i++) {
		temp = f1;
		f1 = f2;
		f2 = f1 + temp;
		printf(",%d", f2);
	}
	return 0;


}
