#include<stdio.h>

int bai10(int n)
{
    return n <= 2 ? n : n * bai10(n - 2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("\nN!! la: %d",bai10(n));
    return 0;
}