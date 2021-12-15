#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define sf scanf
#define pf printf
#define nl pfs("\n");
#define VD void
#define pb push_back
#define pfn(n) printf("%d", n);
#define pff(n) printf("%f", n);
#define pfd(n) printf("%lf", n);
#define pfc(ch) printf("%c", ch);
#define pfs(s) printf("%s", s);
#define sff(f) sf("%f", &f);
#define sfn(n) sf("%d", &n);
#define sfc(ch) sf("%c", &ch);
#define sfs(s) gets(s);
#define fl float
#define dd double
#define sz(x) (int)x.size();
#define max(a, b) a>b?a:b
#define min(a, b) a>b?b:a
#define INF while(1)
#define WHL(i, n) while(i<n)
#define WHL while
#define FOR(i, s, e, c) for(i=(s);i<(e); i+=(c))
#define BR break;
#define CNT continue;
#define _ pfs(" ");
#define __ pfs("\t");
#define PER(n, p) (n*(p/100.0))
#define or ||
#define and &&
#define is ==
#define isnot !=
#define $ auto
//#define EACH(x, ar) for(auto& (x) : (ar))
unsigned long long int res, temp;
void dfs(int n, int start){
//	pf("n - %d temp - %d", n, temp);
//	nl
//	if(temp>n) return;
	if(n==0){ 
		printf("possible key - %llu\n", temp);
		res = min(temp, res);
		return;
	}
	int i;
	for(i=start; i<=9; i++){
		if(n-i>=0){
			temp = temp * 10 + i;
			dfs(n-i, i+1);
			temp /= 10;
		}
	}
}
int main()
{
	$ n;
	sfn(n)
	res = 18446744073709551615; 
//	pf("%llu\n", res);
	temp = 0;
	dfs(n, 1);	
	pf("%llu", res);
}

















