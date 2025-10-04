#include<stdio.h>
int main()
{
	int c, bosluk=0;
	printf("cumle giriniz ve enter'a basiniz:");
	c = getchar();
	while (c != '\n') {
		if (c == ' ')bosluk++;
		c = getchar();
	}
	printf("Girdiginiz kelime sayisi:%d", bosluk + 1);
	return 0;
}