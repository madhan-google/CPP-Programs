#include<stdio.h>
int main(){
	int n;
	printf("enter the size of the matrix : ");
	scanf("%d", &n);
	int A[n][n], B[n][n], i, j;
	printf("\nenter the A matrix: ");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &A[i][j]);
		}
	}
	printf("\nenter the B matrix: ");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &B[i][j]);
		}
	}
	printf("\nAddition of Two Matrix:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	printf("\Subtraction of Two Matrix:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", A[i][j]-B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
