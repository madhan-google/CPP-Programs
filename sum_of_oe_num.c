#include<stdio.h>
#include<math.h>
#include<stdlib.h>
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
#define sfs(s) sf("%s", &s);
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
#define PER(n, p) (n*(p/100.0))
#define or ||
#define and &&
//#define EACH(x, ar) for(auto& (x) : (ar))
int main()
{
	int n, e = 0, o = 0, en = 0, on = 0;
	INF{
		sfn(n)
		if(n==-1) BR
		if(n%2==0){
			en++;
			e += n;
		}else{
			on++;
			o += n;
		}
	}
	pfn(e)
	nl
	pfn(o)
	nl
	pf("%.2f", (e/en)+0.0);
	nl
	pf("%.2f", (o/on)+0.0);
}


