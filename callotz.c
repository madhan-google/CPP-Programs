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
//#define EACH(x, ar) for(auto& (x) : (ar))
int main()
{
	int n, i;
	sfn(n)
	i = n;
	INF{
		if(n%2==0){
			n /= 2;
		}else{
			n = 3*n + 1;
		}
		pfn(n)
		nl
		if(n==1) BR
	}
	pfn(i)
}
//int n;
//	fl time;
//	sfn(n)
//	sff(time)
//	if(time==2){
//		pff(PER(time, 50)+time)
//	}else{
//		pff(time*time)
//	}

