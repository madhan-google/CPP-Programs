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
#define PER(n, p) (n*(p/100.0))
#define or ||
#define and &&
#define isnot !=
#define $ auto
//#define EACH(x, ar) for(auto& (x) : (ar))
int check(int *a, int *b, int n, int m){
	if(n!=m) return 0;
	$ i=0, j=0;
	WHL(i<n&&j<m){
		if(*(a+i)!=*(b+j)) return 0;
		i++;
		j++;
	}
	return 1;
}
int main()
{
	$ n, m, i;
	sfn(n)
	sfn(m)
	$ *a = (int *)malloc(n*sizeof(int));
	$ *b = (int *)malloc(n*sizeof(int));
	FOR(i, 0, n, 1){
		sfn(a[i])
	}
	FOR(i, 0, n, 1){
		sfn(b[i])
	}
	pfs(check(a, b, n, m)==1?"equal":"not equal");
}


