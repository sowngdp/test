#include <stdio.h>
#include <conio.h>
#define MAX 100

void main(){
    char kiTu[MAX], i, kiemTra = 1;
    printf("\nCho xin 1 chuoi di nao ^^ : ");
    gets(kiTu);
    for(i=0; i<=strlen(kiTu)/2; i++)
        if(kiTu[i] != kiTu[strlen(kiTu)-i-1]) {
            puts("Chuoi khong doi xung.");
            kiemTra = 0;
            break;
        }
    if(kiemTra) puts("Chuoi doi xung.");
    getch();
}

