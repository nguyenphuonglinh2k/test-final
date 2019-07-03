// Viết chương trình giải phương trình bậc hai: ax2 + bx + c = 0, với a, b, c là các hệ số thực nhập vào từ bàn phím.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d;

    printf("nhap a = ");
    scanf("%f", &a);
    //check the condition of a value
    while(a == 0) {
        printf("gia tri a nhap khong hop le!\n");
        printf("nhap lai a = ");
        scanf("%f", &a);
    }
    printf("nhap b = ");
    scanf("%f", &b);
    printf("nhap c = ");
    scanf("%f", &c);

    d = b*b - 4*a*c;
    if(d > 0) printf("\nphuong trinh co 2 nghiem phan biet x1, x2: %f, %f", (-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a));
    else if(d = 0) printf("\nphuong trinh co nghiem kep x1 = x2 = %f", -b/(2*a));
         else printf("phuong trinh vo nghiem.");
    return 0;
}
