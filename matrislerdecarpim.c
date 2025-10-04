
#include<stdio.h>
int main()
{
    int i, j, k, sonuc;
    int A[3][3], B[3][3], C[3][3];
    printf("A matrisinin elemanlarini giriniz:");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]=", i, j);
            scanf_s("%d", &A[i][j]);
        }
    }
    printf("B matrisinin elamanlarini giriniz:");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]=", i, j);
            scanf_s("%d", &B[i][j]);
        }
    }
    /* çarpma iþlemine geçiyoruz*/
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sonuc = 0;
            for (k = 0; k < 3; k++) {
                sonuc = sonuc + A[i][k] * B[k][j];
                C[i][j] = sonuc;
            }

        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }
    return 0;

}