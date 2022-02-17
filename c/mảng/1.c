#include <stdio.h>
#include <conio.h>

int nhapsonguyen[4];
int main()
{
    for (int i = 0; i <= 4; i++)
    {
        printf("Nhap n: \n");

        scanf("%d\n", &nhapsonguyen[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        printf("%d \b", nhapsonguyen[i]);
    }
    return 0;
}