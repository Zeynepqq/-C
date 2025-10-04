#include<stdio.h>
int main()
{
	int c, bosluk = 0;
	printf("cumle giriniz:");
	c = getchar();
	while (c != '\n') {
		if (c == ' ')bosluk++;
		c = getchar();
	}
	printf("%d", bosluk);
	return 0;
}