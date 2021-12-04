#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define pb push_back
#define pfn(n) printf("%d ", n);
#define ln() printf("\n");
#define pff(n) printf("%f ", n);
#define pfd(n) printf("%lf ", n);
#define pfc(ch) printf("%c ", ch);
#define pfs(s) printf("%s ", s);
#define fl float
#define dd double
#define max(a, b) a>b?a:b
#define min(a, b) a>b?b:a
#define FOR(i, s, e, c) for(i=(s);i<(e); i+=(c))
int main()
{
	char str[10][10] = {"lskjdf", "slkdfj", "sldkjf"};
	int n, i, j;
	sf("%d", &n);
	FOR(i, 0, n, 1){
		FOR(j, 0, n, 1){
			pfn(i+j)
		}
		ln();
	}
	return 0;
}

