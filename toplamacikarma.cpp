/* tam say�larda toplama ��karma yapan bir kod  */
#include<stdio.h>
int main()
{
	char m;
	int a, b;
	printf(" (+ -) islemlerinden birini seciniz:");
	scanf_s("%c", &m);
	printf("iki adet sayi giriniz:");
	scanf_s("%d \n",&a);
	scanf_s("%d \n", &b);
	printf("\n i�lem:%c\n a:%d \n b:%d\n", m, a, b);
	
    switch (m) {
	case'+':printf("%d", a + b); break;
		
	case'-':printf("%d", a - b); break;
	default:printf("naber"); break;
	
	}
	return 0;
	   
}