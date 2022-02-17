#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float L, W, D, C;
    printf("Nhap L va W: ");
    scanf("%f", &L);
    scanf("%f", &W);
    D = L*W;
    C = 2*(L + W);
    printf("Dien tich hinh chu nhat la: D = %f\n", D);
    printf("Chu vi hinh chu nhat la: C = %f", C);

    getch();
}