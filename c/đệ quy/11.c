#include <stdio.h>

int fibo(int n)
{
    return (n <= 2) ? 1 : fibo(n - 1) + fibo(n - 2);
}
double bai11(int n)
{
    return (n < 2) ? 1 : bai11(n-1) + 1.0/fibo(n);
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("Tong S la: %f",bai11(n));
    return 0;
}