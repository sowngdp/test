#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, m, a[] = {'1', 6, -6, 44, 8, 33};
    m = a[0];
    for (i = 0; i < 6; i++)
        if (m < a[i])
            m = a[i];
    printf(" m = % d", m);
    return 0;
}
int tinh(int *p)
{
    int i;
    for (i = 0; i < 4; i++)
    {
        *p = *p - 1;
        p++;
    }
}
int main()
{
    int a[] = {6, 7, 8, 9}, i;
    tinh(a);

    

        for (i = 3; i >= 0; i--)
            printf("% d", a[i]);
    return 0;}

