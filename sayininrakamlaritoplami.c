#include<stdio.h>
int main()
{
	int sayi, toplam= 0 , kalan;
	printf("bir sayi giriniz:");
	scanf_s("%d", &sayi);
	while (sayi != 0) {
		kalan = sayi % 10;
		toplam = toplam + kalan;
		sayi = sayi / 10;
	}
	printf("sayinin rakamlari toplami:%d", toplam);
	return 0;
}