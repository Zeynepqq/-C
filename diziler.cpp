#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int dizi[10];
	/*diziye rastgele deðer atayalým*/
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		dizi = rand() % 100;
	}
	for (int i = 0; i < 10; i++) {
		printf("\nint[%d]=%d", i, int[i]);
	}
	return 0;

}