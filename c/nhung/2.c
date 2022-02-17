#include <stdio.h>

void chuyendoi(unsigned int n)
{
    if (n < 2)
        printf("%d", n);
    else
    {
        chuyendoi(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int t;
    printf("nhap so t o he thap phan: ");
    scanf("%d", &t);
    chuyendoi(t);
}