#include<stdio.h>
int main()
{
	int a, b , c,d;
	a = 6;
	b = 8;
	c = a + b;
	d = a * c;
	printf("a:%d  b:%d\n", a, b);
	printf("assagideki islemin sonucu nedir?\n a+b=");
	scanf_s("%d",&c);
	if (a+b== c) {
		printf("Aferin\n");
	}
	else if (a + b != c) {
		printf("biraz daha dikkatli ol!\n");
	}
	printf("assagidaki islemin sonucu nedir?\n a*b=");
	scanf_s("%d", &d);
	if (a* b == d) {
		printf("helal be sana");
	}
	else if (a * b != d) {
		printf("SALAK MISIN CEMÝLE?!!");
	}
	return 0;
}