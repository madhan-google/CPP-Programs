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
#define PER(n, p) (n*(p/100.0))
#define or ||
#define and &&
#define is ==
#define isnot !=
#define $ auto
//#define EACH(x, ar) for(auto& (x) : (ar))
VD sort(int *ar, int n){
//	$ n = (sizeof(ar))/sizeof(int);
//	pfn(n)
	if(n<2) return;
	$ mid = n/2, i;
	int *l = (int *)malloc(mid*sizeof(int));
	int *r = (int *)malloc((n-mid)*sizeof(int));
	FOR(i, 0, mid, 1){
		*(l+i) = *(ar+i);
	}
	FOR(i, mid, n, 1){
		*(r+(i-mid)) = *(ar+i);
	}
	sort(l, mid);
	sort(r, n-mid);
	merge(l, r, ar);
}
VD merge(int *l, int *r, int *ar){
	$ i = 0, j = 0, k = 0;
	$ ln = (sizeof(l))/sizeof(int);
	$ rn = (sizeof(r))/sizeof(int);
	WHL(i<ln&&j<rn){
		if(*(l+i)<=*(r+j)){
			*(ar+k) = *(l+i);
			i++;
		}else{
			*(ar+k) = *(r+j);
			j++;
		}
		k++;
	}
	WHL(i, ln){
		*(ar+k) = *(l+i);
		i++;
		k++;
	}
	WHL(j, rn){
		*(ar+k) = *(r+j);
		j++;
		k++;
	}
}
int main(){
	$ n, i;
	sfn(n)
	$ *ar = (int *)malloc(n*sizeof(int));
	FOR(i, 0, n, 1){
		sfn(ar[i])
	}
	sort(ar, n);
	FOR(i, 0, n, 1){
		pfn(*(ar+i)) _
//		nl
	}
}

















