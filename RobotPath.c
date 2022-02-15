#include<stdio.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int dp[n+1][m+1], i, j;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			dp[i][j] = 0;
		}
	}
	for(i=0; i<n; i++) dp[0][i] = 1;
	for(i=0; i<m; i++) dp[i][0] = 1;
	for(i=1; i<n; i++){
		for(j=1; j<m; j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}
	printf("%d", dp[n-1][m-1]);
}
