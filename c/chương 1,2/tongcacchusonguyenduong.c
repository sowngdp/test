// // /*#include <conio.h>
// // #include <stdio.h>
// // int main()
// // {
// //     int n, s = 0;
// //     scanf("%d", &n);
// //     if (n >= 0)
// //     {
// //         s = s + n % 10;
// //         n = n / 10;
// //     }
// //     else

// //         printf("%d", s);
// // }*/
// // #include <conio.h>
// // #include <stdio.h>
// // int main()
// // {
// //     int n;
// //     int sotachra;
// //     int s = 0;
// //     printf("Nhap n: ");
// //     scanf("%d", &n);
// //     for (; n != 0;)
// //     {
// //         sotachra = n % 10;
// //         s += sotachra;
// //         n /= 10;
// //     }
// //     printf("%d", s);
// // }
// #include <stdio.h>
// int main()
// {
//     int a,dv;
//     scanf("%d",&a);
//     int sum = 0;
//     while (a>0)
//     {
//         dv = a%10;
//         a=a/10;
//         sum = sum+ dv;
//     }
//     printf("%d", sum);

// }
#include <stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow = pow*x;
    }
    printf("%d",pow);
    return 0;
}