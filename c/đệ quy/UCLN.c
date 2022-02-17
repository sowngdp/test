#include<stdio.h>
#include<conio.h>

int USCLN(int x,int y)
{int r;
if(x<y)
{
r=x;
x=y;
y=r;
}
if(r=x%y)
{
x=y;
y=r;
return(USCLN(x,y));
}
return y;
}

