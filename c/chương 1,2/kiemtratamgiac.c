#include <stdio.h>
int main()
{

    int a, b, c;
    printf("\nnhap vao do dai canh a: ");
    scanf("%d", &a);
    printf("nhap vao do dai canh b: ");
    scanf("%d", &b);
    printf("nhap vao do dai canh c: ");
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b)
    {

        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            printf("day la tam giac vuong");

        else if (a == b && b == c)
            printf("day la tam giac deu");

        else if (a == b || a == c || b == c)
            printf("day la tam giac can");

        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
            printf("day la tam giac tu");

        else
            printf("day la tam giac nhon");
    }

    else
        printf("Ba canh a, b, c khong phai la ba canh cua mot tam giac");



}