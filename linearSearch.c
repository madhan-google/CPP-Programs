#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int* ar = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) scanf("%d", ar+i);
    int target;
    scanf("%d", &target);
    int i, index = -1, count = 0;
    for(i=0; i<n; i++)
        if(target==*(ar+i)){
            index = i;
            count++;
            printf("element found in index %d\n", (i+1));
        }
    if(index==-1){
        printf("not found");
    }else{
        printf("element occurence %d", count);
    }
}