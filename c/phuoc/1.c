// kiem tra so nguyen duong n có phai la so hoan hao khong
#include <stdio.h>
#include <conio.h>
    int kiemtrasohoanhao(unsigned n)
{
    unsigned tong;
    tong = 0;

    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            tong = tong + i;
        }
    }

    if (tong == n)
    {
        return 1;
    }
    return 0;
}

int main()
{

    unsigned n;
    printf("\n Nhap vao so nguyen duong n ");
    scanf("%u", &n);
    int kiemtra = kiemtrasohoanhao(n);
    if (kiemtra == 0)

    {
        printf("\n n la so hoan hao ");
    }
    else
    {

        printf("\n KHong la so hoan hao ");
    }
}