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
//#define EACH(x, ar) for(auto& (x) : (ar))
struct Node{
	int val;
	struct Node *next;
};
void append(struct Node **head, int index, int val){
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->val = val;
	newnode->next = NULL;
	if(head[index]==NULL){
		head[index] = newnode;
		return;
	}else{
		struct Node *cur = head[index];
		WHL(cur->next!=NULL) cur = cur->next;
		cur->next = newnode;
	}
}
void show(struct Node* head){
	struct Node* cur = head;
	WHL(cur!=NULL){
		pfn(cur->val) _
		cur = cur->next;
	}
	nl
}
int main()
{
	$ n;
	sfn(n)
	struct Node **adj = (struct Node**)malloc(n*sizeof(struct Node));
	$ i, j;
	for(i=0; i<n; i++){
		adj[i] = (struct Node*)malloc(n*sizeof(struct Node));
	}
	INF{
		$ s, e;
		sfn(s)
		sfn(e)
		if(s==-1&&e==-1) break;
		append(&adj, s, e);
	}
	for(i=0; i<n; i++){
		show(adj[i]);
	}
}

















