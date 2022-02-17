#include <stdio.h>
#include <conio.h>
#include <math.h>
float sinx(float x)
 
{ 
  
  float tu = x,mau = 1;
  float tong = 0;
  float sohang = 1;
  int i = 1;

  while ( fabs(sohang) > 0.0000001)
  {   
      sohang = tu/mau;
      tong += sohang;
      tu = tu * x * x * (-1);
      ++i;
      mau = mau * i;
      i++;
      mau = mau * i;

  }
  return tong;
}
int main()
{   
    float z;
    scanf("%LF",&z);
    printf("\nTong la %f", sinx(z));
    getch();
    return 0;
}