#include <conio.h>
#include <stdio.h>
int main()
{
    float fact = 5, i, t = 1, n,s=1;
    printf("nhap so de tinh giai thua\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        t *= i;
        fact += s/(t);
    }
    printf("Dap an la: %f", fact);
}