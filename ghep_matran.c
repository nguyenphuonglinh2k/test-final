#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100

int A[max], B[max], i, m, n, C[max], j;

void nhap_mtr(int *p, int *m, char ten){
    printf("nhap do dai mang 1 chieu %c: ", ten);
    scanf("%d", m);
    while(*m <= 0){
        printf("\nnhap khong hop le, nhap lai: ");
        scanf("%d", m);
    }
    for(i = 0; i < *m; i++){
        printf("%c[%d] = ", ten, i);
        scanf("%d", p + i);
    }
}

void in_mtr(int *p, int m, char ten){
    printf("\nin mang 1 chieu %c :\n", ten);
    for(i = 0; i < m; i++){
        printf("%c[%d] = %d\t", ten, i, *(p + i));
    }
}

void ghep_2_mang(int m, int n, int k){

    //sap xep mang a tang dan
    for( i = 0; i < m; i++){
        for( j = i + 1; j < m; j++)
          if( A[i] > A[j] ){
            k = A[i];
            A[i] = A[j];
            A[j] = k;
          }
    }
    //sap xep mang a va b
    for( i = 0; i < m; i++)
        for( j = 0; j < n; j++)
          if( A[i] > B[j] ){
            k = A[i];
            A[i] = B[j];
            B[j] = k;
          }
    // sap xep mang b
    for( i = 0; i < n; i++)
        for( j = i + 1; j < n; j++)
          if( B[i] > B[j] ){
            k = B[i];
            B[i] = B[j];
            B[j] = k;
          }
    //in ket qua
    for(i = 0; i < (m + n); i++){
        if(i < m) printf("%d ,",A[i]);
        else printf("%d ,",B[i-m]);
    }
}


int main()
{
    char select;

    printf("1. nhap mang: \n");
    printf("2. ghep 2 mang thanh 1 mang da duoc sap xep va in ket qua.\n");
    printf("3. thoat.\n");

    do{
        printf("\nnhap lua chon : ");
        select = getchar();
        switch(select){
            case '1':{
                nhap_mtr(A, &m, 'A');
                nhap_mtr(B, &n, 'B');
                break;
            }
            case '2':{
                printf("\nma tran da duoc sap xep: ");
                ghep_2_mang(m, n, 0);
                break;
            }
        }

    } while(select != '3');


    return 0;
}
