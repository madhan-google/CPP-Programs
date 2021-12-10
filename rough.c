#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
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
#define sfs(s) sf("%s", s);
#define fl float
#define dd double
#define sz(x) (int)x.size();
#define max(a, b) a>b?a:b
#define min(a, b) a>b?b:a
#define INF while(1)
#define WHL(i, n) while(i<n)
#define FOR(i, s, e, c) for(i=(s);i<(e); i+=(c))
#define BR break;
#define CNT continue;
#define _ pfs(" ");
#define __ pfs("\t");
#define PER(n, p) (n*(p/100.0))
#define or ||
#define and &&
#define isnot !=
#define $ auto
//#define EACH(x, ar) for(auto& (x) : (ar))
static int x = 5;
int main()
{
//	int r, c, n;
//	scanf("%d %d %d", &r, &c, &n);
//	if( (1<=n&&r>=n) || (r*c>=n&&(r*c)-r+1<=n) || (n%r==0) ){
//		printf("yes");
//	}else{
//		printf("no");
//	}
	int i, j, count = 1, r = 1;
	FOR(i, 1, 6, 1){
		r = i;
		count = 0;
		FOR(j, 1, 6, 1){
			count+=r;
			pfn(count) _
		}
		r++;
		nl
	}
}









