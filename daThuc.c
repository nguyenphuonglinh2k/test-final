//Viết chương trình  nhập vào các hệ số của hai đa thức:  P=anxn + an-1xn-1 + . . . + a1x + a0 ; Q=bmxm + bm-1xm-1 + . . . + b1x + b0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 100

void menu(){
    printf("1. Nhap he so cua 2 da thuc P, Q\n");
    printf("2. Tinh he so cua da thuc T\n");
    printf("3. In he so cua 3 da thuc P, Q, T \n");
    printf("4. In gia tri cua 3 da thuc P, Q, T\n");
    printf("5. Ket thuc\n");
}

void nhap_he_so(int a[], int *n, char ten){
    int i = 0;
    printf("*nhap chi so cuoi cua %c: ", ten);
    scanf("%d", n);
    for(i = 0; i <= *n; i++){
        printf("he so thu %d: ", i);
        scanf("%d", &a[i]);
    }
}

void in_he_so(int a[], int n, char ten){
    int i;
    printf("\n*In he so cua da thuc %c:\n", ten);
    for(i = 0; i <= n; i++){
        printf("he so thu %d: %d\n", i, a[i]);
    }
}

void he_so_tong(int a[], int b[], int c[], int n, int m){
    int i;
    if(n > m)
        for(i = m; i <= n; i++)
            c[i] = a[i];
    else if(m > n)
        for(i = n; i <= m; i++)
            c[i] = a[i];
    for( i = 0; i <= abs(m-n); i++)
        c[i] = a[i] + b[i];
}

void in_gia_tri(int a[], int n, int x, char ten){
    int i, s = 0;
    for(i = 0; i <= n; i++){
        s += a[i]*pow(x,i);
    }
    printf("da thuc %c = %d", ten, s);
}

int main()
{
    int P[max], Q[max], T[max], n, m, x;
    char select;

    printf("\nnhap x = ");
    scanf("%d", &x);
    do{
        menu();
        printf("\n--> Nhap lua chon: ");
        select = getchar();
        switch(select){
            case '1':
                nhap_he_so(P, &n, 'P');
                nhap_he_so(Q, &m, 'Q');
                break;
            case '2':
                he_so_tong(P, Q, T, n, m);
                break;
            case '3':
                in_he_so(P, n, 'P');
                in_he_so(Q, m, 'Q');
                in_he_so(T, n + m, 'T');
                break;
            case '4':
                in_gia_tri(P, n, x, 'P');
                in_gia_tri(Q, m, x, 'Q');
                in_gia_tri(T, m+n, x, 'T');
        }
    } while(select != '5');


    return 0;
}
