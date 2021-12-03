#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int r, c, n;
	scanf("%d %d %d", &r, &c, &n);
	if( ( (r*2)>=n && (r+1)<=n ) || ( (r*c)-r>=n && (r*c)-(r*2)<=n ) ){
		printf("\nits a mango tree");
	}else{
		printf("\nits not a mango tree");
	}
	return 0;
}

//int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d is greatest", a>b?a:b);

