#include <stdio.h>
#include <math.h>
int ktsonguyento(unsigned int n)
{
    if (n < 2)
    {
        printf("\n%d khong phai so nguyen to", n);
    }
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\n%d la so nguyen to", n);
    }
    else
    {
        printf("\n%d khong phai so nguyen to", n);
    }
}
int main()
{
    printf("Hay nhap so n: ");
    unsigned int n;
    scanf("%d", &n);
    ktsonguyento(n);
    return 0;
}
// #include <stdio.h>
// #include <math.h>
// int bai8(int n, int i){
//     if(n<2) return 0;
//     if(n==2) return 1;
//     if(i > sqrt(n)) return 1;
//     if(n%i == 0) return 0;
//     return bai8(n, i+1);
// }