#include<stdio.h>

int fib(int n) 
{
    return (n < 2) ? 1: fib(n-1)+ fib(n-2);
}
double tong(int n) 
{
    return ( n < 2) ? 1 : tong(n-1) + 1.0/fib(n) ;
}
int main() 
{
    int n;
    printf("Nhap so thu tu cua f(n):");
    scanf("%d", &n);
    printf("Tong s = %f \n", tong(n));
    return 0;
}