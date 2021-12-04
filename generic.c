#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define pfn(n) printf("%d", n);
#define pff(n) printf("%f", n);
#define pfd(n) printf("%lf", n);
#define pfc(ch) printf("%c", ch);
#define pfs(s) printf("%s", s);
#define fl float
#define dd double
#define max(a, b) a>b?a:b
#define min(a, b) a>b?b:a
#define FOR(i, s, e, c) for(i=(s);i<(e); i+=(c))
int main()
{
	int n;
	sf("%d", &n);
	pfs(((n*n)%10==n)?"Automorphic Number":"Not Automorphic Number");
	return 0;
}

