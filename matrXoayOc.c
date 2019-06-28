// ma tran xoay oc
#include <stdio.h>
#include <stdlib.h>
#define max 100

int a[max][max], i, j, n, dem = 0, value = 1;

void nhap_mtr(int n){

    while(n > 0){
        for(i = dem; i < n; i++) a[dem][i] = value++;
        for(i = dem + 1; i < n; i++) a[i][n-1] = value++;
        for(i = n - 2; i >= dem; i--) a[n-1][i] = value++;
        for(i = n - 2; i > dem; i--) a[i][dem] = value++;
        --n;
        ++dem;

    }
}

void in_mtr(int n){
    printf("\nin ma tran xoan oc:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");

    }
}

int main()
{
    printf("nhap kich thuoc cho ma tran xoan oc a: ");
    scanf("%d", &n);

    nhap_mtr(n);
    in_mtr(n);

    return 0;
}
