#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float R, S, V;
    printf("Nhap ban kinh R = ");
    scanf("%f", &R);
    S = 4 * M_PI * pow(R,2) ;
    V = (4 * M_PI *pow(R,3))/3;
    printf("Dien tich hinh cau la = %0.3f\n", S);
    printf("The tich hinh cau la = %0.3f\n", V);
    getch();
}