#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;

    printf("nhap vao so thap luc phan: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("%c", ch);
    }
    else
    {
        if ((ch >= 'A' && ch <= 'F') || (ch >= 'a' && ch <= 'f'))
            printf("%d", 10 + (toupper(ch) - 'A'));
        else
            printf("khong hop le");
    }

    return 0;
}