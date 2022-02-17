#include <stdio.h>
#include <conio.h>
#include <math.h>

int Kiemtrasonguyento(int soA)
{
    if (soA < 2)
        return 0;

    for (int i = 2; i <= sqrt((float)soA); i++)
    {
        if (soA % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void insonguyento(int n)

{
    for(int i = 2;i <= n; i++)
    {
        if(Kiemtrasonguyento(i))
        {
            printf("%d; ",i);
        }
    }
}

int main()
{
    insonguyento(1000);
    return 0;
}
