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
	struct Node *pre;
};
VD append(struct Node **head, int val){
	struct Node *newnode;
	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->val = val;
	newnode->next = NULL;
	newnode->pre = NULL;
	if(*head==NULL){
		*head = newnode;
		return;
	}
	struct Node *cur = *head;
	WHL(cur->next!=NULL){
		cur = cur->next;
	}
	cur->next = newnode;
	newnode->pre = cur;
}
VD show(struct Node **head){
	struct Node *cur = *head;
	while(cur!=NULL){
		pf("[%d]->", cur->val);
		cur = cur->next;
	}
}
int main()
{
	struct Node *head = NULL;
	append(&head, 1);
	append(&head, 2);
	append(&head, 3);
	append(&head, 4);
	append(&head, 5);
	append(&head, 6);
	append(&head, 7);
	show(&head);
}

















