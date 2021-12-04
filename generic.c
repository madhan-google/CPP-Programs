#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
#define nl pfs("\n");
#define VD void
#define pb push_back
#define pfn(n) printf("%d ", n);
#define pff(n) printf("%f ", n);
#define pfd(n) printf("%lf ", n);
#define pfc(ch) printf("%c ", ch);
#define pfs(s) printf("%s ", s);
#define fl float
#define dd double
#define sz(x) (int)x.size();
#define max(a, b) a>b?a:b
#define min(a, b) a>b?b:a
#define inf while(1)
#define WHL(i, n) while(i<n)
#define FOR(i, s, e, c) for(i=(s);i<(e); i+=(c))
#define br break
#define cnt continue
#define _ pfs(" ");
//#define EACH(x, ar) for(auto& (x) : (ar))
int ar[100];
int top = -1;
VD push(int);
VD pop();
VD show();
VD peek();
int main()
{
	inf{
		
	}
	return 0;
}
VD show(){
	int i;
	if(top==-1){
		pf("stack underflow");
	}else{
		FOR(i, top, 0, -1){
			pfn(ar[i]);
		}
	}
	nl;
}
VD push(int n){
	if(top==99){
		pf("stack overflow");
	}else{
		ar[++top] = n;
		pfn(n);pf("has been pushed");
	}
	nl;
}
VD pop(){
	if(top==-1){
		pf("stack underflow");
	}else{
		top--;
		pfn(ar[top]);
		pf("has been popped");
	}
	nl;
}
VD peek(){
	if(top==-1){
		pf("stack underflow");
	}else{
		pfn(ar[top]);
	}
}

