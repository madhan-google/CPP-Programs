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
//%[^\n]%*c
int main()
{
	int T;
	scanf("%d", &T);
	int i;
	FOR(i, 1, T+1, 1){
		char str[10000];
		scanf("%s", str);
		// pfs(str);
		int len = strlen(str);
		char ch = str[len-1];
		if(ch=='y'){
			nl
			pf("Case #%d: %s is ruled by nobody.", i, str);
		}else if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U'){
			nl
			pf("Case #%d: %s is ruled by Alice.", i, str);
		}else{
			nl
			pf("Case #%d: %s is ruled by Bob.", i, str);
		}
	}
	return 0;
}

	
	









