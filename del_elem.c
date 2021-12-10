#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#include<bits/stdc++.h>
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
#define is ==
#define and &&
#define isnot !=
#define $ auto
//#define EACH(x, ar) for(auto& (x) : (ar))
int main()
{
	$ n;
	sfn(n)
	$ *ar = (int *)malloc(n*sizeof(int));
	$ i;
	FOR(i, 0, n, 1){
		sfn(ar[i])
	}
	$ target;
	sfn(target)
	FOR(i, 0, n, 1){
//		ar+i = (int *)malloc(sizeof(int));
		if(target==*(ar+i)){
			*(ar+i) = 0;
		}
	}
	FOR(i, 0, n, 1){
		if(*(ar+i) is 0) CNT
		pfn(*(ar+i)) _
	}
//	pf("\a");
}

















