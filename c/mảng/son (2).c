#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void nhapngaunhien(int arr[], int *n){
    printf("nhap so phan tu cua mang: ") ;
    scanf("%d", n);

    srand (time(NULL)); 
    int x = 50;
    for (int i = 0; i < *n; i++)
    {
        arr[i] = rand()%x ;
    }
}
void xuatmang(int *a, int n){
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d; ", a[i]);
    }
}
int main()
{
    int a[100];
    int n;
    nhapngaunhien(a,&n);
    xuatmang(a,n);
    for (int i = n-1; i >=(n+1)/2; i--)
    {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    xuatmang(a,n);
    
    return 0;
}
