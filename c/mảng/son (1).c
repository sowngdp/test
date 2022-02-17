#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void nhapngaunhien(int arr[], int *n)
{
    printf("nhap so phan tu cua mang: ");
    scanf("%d", n);

    srand(time(NULL));
    int x = 50;
    int ran = 100;
    for (int i = 0; i < *n; i++)
    {
        arr[i] = ran;
        ran = ran - rand() % x;
    }
}
void xuatmang(int *a, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d; ", a[i]);
    }
}
int main()
{
    int a[100];
    int n;
    nhapngaunhien(a, &n);
    xuatmang(a, n);
    int b;
    scanf("%d", &b);
    int i = n - 1;
    if (b <= a[n - 1])
    {
        a[n] = b;
    }
    else
    {
        for (; i > 0; i--)
        {
            a[i + 1] = a[i];
            if (a[i] <= b)
            {
                if (a[i - 1] >= b)
                {
                    a[i] = b;

                    break;
                }
            }
        }
        if (i == 0)
            a[0] = b;
    }

    n++;
    xuatmang(a, n);

    return 0;
}
