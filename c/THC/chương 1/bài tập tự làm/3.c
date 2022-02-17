#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float x, tu, mau;
    printf("Mhap x: ");
    scanf("%f",&x);
    tu = pow(x,3) + log(abs(x-3)+2)/log(5);
    mau = pow(atan(x-5),2) +1;

    printf("%f",tu/mau);

    getch();
}