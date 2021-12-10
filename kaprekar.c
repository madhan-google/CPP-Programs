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
#define isnot !=
#define $ auto
//#define EACH(x, ar) for(auto& (x) : (ar))
int rev(int n){
	$ num = 0;
	WHL(0, n){
		$ t = n%10;
		num = num * 10 + t;
		n /= 10;	
	}
	return num;
}
int main()
{
	$ n;
	sfn(n)
	$ p = n*n;
	pfn(p) nl
	$ t = p, len = 0;
	WHL(0, t){
		len++;
		t /= 10;
	}
	len = len / 2;
	t = p;
	$ A = 0, B = 0, i = 0;
	WHL(i, len+1){
		$ temp = t%10;
		A = A*10+temp;
		t /= 10;
		i++;
	}
	i=0;
	WHL(i, len){
		$ temp = t%10;
		B = B*10+temp;
		t /= 10;
		i++;
	}
	pfn(rev(A)) _ pfn(rev(B)) nl
	pfs((rev(A)+rev(B))==n?"kaprekar number":"not kaprekar number")
}


