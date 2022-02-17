#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// xoa tat ca phan tu x;
void nhapngaunhien(int arr[], int *n)
{
    printf("nhap so phan tu cua mang: ");
    scanf("%d", n);

    srand(time(NULL));
    int x = 30;
    int ran = rand() % x;
    for (int i = 0; i < *n; i++)
    {
        arr[i] = ran;
        ran =rand() % x;
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
    int b[100];
    int lengthb =0;
    int n;
    nhapngaunhien(a, &n);
    xuatmang(a, n);
    int x; scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=x){
            b[lengthb++] = a[i];
        }
    }
    xuatmang(b, n);

    return 0;
}
