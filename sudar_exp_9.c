#include<stdio.h>
int main(){
	int n, ch;
	do{
		printf("enter number from 0 to 99 : ");
		scanf("%d",&n);
		ch = n;
		n = n / 10;
		switch( n ){
			case 0:
				printf("wrong input ");
				break;
			case 9:
				printf("this number is between 90 to 99\n");
				break;
			case 8:
				printf("this number is between 80 to 89\n");
				break;
			case 7:
				printf("this number is between 70 to 79\n");
				break;
			case 6:
				printf("this number is between 60 to 69\n");
				break;
			case 5:
				printf("this number is between 50 to 59\n");
				break;
			default:
				printf("this number is between 1 to 49\n");
				break;
		}
	}while(ch > 1 && ch <= 99);
}
