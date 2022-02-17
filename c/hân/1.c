#include <stdio.h>
void GTLN(int a, int b, int c)
{
    int max = a;
    if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("\nSo lon nhat trong ba so la:%d", max);
}
int main()
{
    int a, b, c;
    printf("Nhap ba so a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);
    GTLN(a, b, c);
}