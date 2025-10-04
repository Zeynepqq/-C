#include<stdio.h>
int main()
{
	int i, n, eb;
	int A[100];
	printf("dizinin eleman sayisini giriniz:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		printf("A[%d]=", i);
		scanf_s("%d", &A[i]);

	}
	eb = A[0];
	for (i = 0; i < n; i++) {
		if (eb < A[i]) eb = A[i];
	}
	printf("en buyuk sayi:%d", eb);
	return 0;

}

