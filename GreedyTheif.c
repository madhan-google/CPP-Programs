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
#define __ pfs("\t");
#define PER(n, p) (n*(p/100.0))
#define or ||
#define and &&
#define is ==
#define isnot !=
#define $ auto
//#define ULLD long long int 
#define LLD long long int
LLD res, temp;
void dfs(LLD start, LLD n){
    if(n==0){
    	printf("%lld\n", temp);
        res = min(res, temp);
        return;
    }
    LLD i;
    for(i=start; i<=9; i++){
        if(n-i>=0){
            temp = temp * 10 + i;
            dfs(i+1, n-i);
            temp /= 10;
        }
    }
}
int main(){
    LLD n, mod, count = 0;
    scanf("%lld", &n);
	mod = n%9;
	LLD res = mod;
	count = n/9;
	while(count-->0){
		res = res * 10 + 9;
	}
	printf("%lld", res);
}

















