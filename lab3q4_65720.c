#include <stdio.h>
int main(){
	int  a;
	int n =0;
        int sum = 0;
	do{
		printf("enter a number : ");
		scanf("%d" , &a);
		n++;
		sum += a;
		}
	while(a>0);
	printf("sum = %d",sum);
	printf("\n avg = %d", sum/n);
	return 0;
}
