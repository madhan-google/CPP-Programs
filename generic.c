#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define pb push_back
#define pfn(n) printf("%d ", n);
#define ln printf("\n");
#define pff(n) printf("%f ", n);
#define pfd(n) printf("%lf ", n);
#define pfc(ch) printf("%c ", ch);
#define pfs(s) printf("%s ", s);
#define fl float
#define dd double
#define sz(x) (int)x.size();
#define max(a, b) a>b?a:b
#define min(a, b) a>b?b:a
#define FOR(i, s, e, c) for(i=(s);i<(e); i+=(c))
//#define EACH(x, ar) for(auto& (x) : (ar))
int main()
{
	char str[10][10] = {"lskjdf", "slkdfj", "sldkjf"};
	int n, i, j;
	sf("%d", &n);
	int ar[n];
	FOR(i, 1, 6, 1){
		pfn(i);
		ln;
	}
	return 0;
}

