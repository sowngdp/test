#include<stdio.h>
int tonguoc(int n, int i){
    if(i > n/2) return 0;
    return n%i==0?i+tonguoc(n,i+1):tonguoc(n, i+1);
}
int bai9(int n){
    return n == tonguoc(n,1);
}
int main()
{   int n;
    scanf("%d",&n);
   if(bai9(n))
    printf("\n%d la so hoan hao",n);
    else
    printf("\n%d khong phai so hoan hao",n);
    return 0;
}
// #include <stdio.h>
// #include <conio.h>

// int KiemTra_SHH(unsigned int n, int i)
// {
//     static int tonguocso = 0;
//     if (i == n)
//     {
//         if (tonguocso == n)
//             printf("\n%d la so hoan hao", n);
//         else
//         {
//             printf("\n%d khong phai la so hoan hao", n);
//         }
//         return 0;
//     }

//     else if (n % i == 0)
//     {
//         tonguocso = tonguocso + i;
//         i++;
//         return KiemTra_SHH(n, i);
//     }
//     else
//     {
//         i++;
//         return KiemTra_SHH(n, i);
//     }
// }
// int main()
// {
//     printf("Hay nhap n: ");
//     unsigned int n;
//     int i = 1;
//     scanf("%d", &n);
//     KiemTra_SHH(n, i);
//     return 0;
// }