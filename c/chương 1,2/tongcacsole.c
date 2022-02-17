#include <conio.h>
#include<stdio.h>
int main()
{
    int i, n, t, a;
    t = 0;
    printf("Nhap vao gia tri n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = i % 2;
        if (a != 0)
            t = t + i;
    }
    printf("%d", t);
    getchar();
}
