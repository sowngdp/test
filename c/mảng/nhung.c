#include <stdio.h>
int main()
{
    char a[5];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%c", &a[i]);
    }
    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        if (a[i] == 'K' || a[i] == 'J' || a[i] == 'Q')
        {
            sum += 10;
        }
        else if (a[i] == 'A')
        {
            sum += 1;
        }
        else
            sum = sum + (a[i] - '0');
    }

    printf("%d", sum);
    return 0;
}