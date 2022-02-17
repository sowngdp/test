#include<stdio.h>
#include<conio.h>

// int tongcacsonguyen(int n)
// {   
//     int s;
//     for(int i = 1; i <= n; i++)
//     {
//         s += i;
//     }
//     return s;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d",tongcacsonguyen(n));
//     return 0;
// }
int tongsonguyen(int i, int n)
{   
    int s = 0;
    if(i<=n)
    {
        s += i ;
        tongsonguyen(i++,n);
    }
    return s;
}

int main()
{
    int i = 1, n;
    scanf("%d",&n);
    printf("%d",tongsonguyen(i,n));
    return 0;
}