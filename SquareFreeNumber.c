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
int check(int n){
	int s = sqrt(n);
	return (s*s==n)?1:0;
}
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int flag = 1;
	for(i=2; i<=n/2; i++) if(n%i==0) printf("%d ", i);
	nl
	for(i=2; i<=n/2; i++){
		if(n%i==0&&check(i)){
			flag = 0;
			break;
		}
	}
	printf("%s", flag==0?"not square free number":"square free number");
}









