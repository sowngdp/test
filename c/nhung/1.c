#include<stdio.h>
int main () {
	int dem = 0, i;
	char O[5];
	scanf("%s", O);
    for(i = 0; i < 3; i++) {
		if (O[i] == 'J' || O[i] == 'Q'|| O[i] == 'K') {
			dem += 10; 
		}
		else if(O[i] == 'A') {
	   		dem=dem+1;
		}
		else {
			dem += (O[i] - '0'); 
		}
	}
	printf("%d", dem%10);
	return 0;

}