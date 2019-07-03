#include <stdio.h>
#include <stdlib.h>
#define max 100

int i, j, k;

void nhap_mtr(int a[][max], int *hang, int *cot, char ten){
    printf("nhap so hang cua mang %c: ", ten);
    scanf("%d", hang);
    printf("nhap so cot cua mang %c: ", ten);
    scanf("%d", cot);
    printf("mang %c:\n", ten);
    for(i = 0; i < *hang; i++)
        for(j = 0; j < *cot; j++){
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d", &a[i][j]);
        }
}

void nhan_mtr(int a[][max], int b[][max], int c[][max], int m, int n, int p){
    for(i = 0; i < m; i++)
        for(k = 0; k < p; k++){
            int s = 0;
            for(j = 0; j < n; j++) s += a[i][j] * b[j][k];
            c[i][k] = s;

        }
}

void in_mang_kq(int c[][max], int m, int p){
    printf("mang ket qua: \n");
    for(i = 0; i < m; i++){
        for(k = 0; k < p; k++)
            printf("%d\t", c[i][k]);
        printf("\n");
    }
}

int main()
{
    int a[max][max], b[max][max], c[max][max], m, n, p;
    nhap_mtr(a, &m, &n, 'a');
    nhap_mtr(b, &n, &p, 'b');
    nhan_mtr(a, b, c, m, n, p);
    in_mang_kq(c, m, p);

    return 0;
}
