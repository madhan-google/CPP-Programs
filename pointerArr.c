#include<stdio.h>
#include<stdlib.h>
#define max(a, b) a>b?a:b
int main(){
    int n;
    scanf("%d", &n);
    int *ar = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) scanf("%d", ar+i);
    for(int i=0; i<n; i++) printf("%d ", *(ar+i));
    int mx = -1;
    for(int i=0; i<n; i++) mx = max(mx, *(ar+i));
    printf("\nmax element - %d", mx);
    return 0;
}