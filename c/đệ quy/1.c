#include<stdio.h>
#include<conio.h>
int s(int n)
{
if(n==0) return 0;
return(s(n-1) +n );
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d",s(n));
    return 0;
}