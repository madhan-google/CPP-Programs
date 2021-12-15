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
int mx;
struct Node{
	int val;
	struct Node *left;
	struct Node *right;
};
VD preorder(struct Node *root){
	if(root!=NULL){
		printf("%d ", root->val);
		preorder(root->left);
		preorder(root->right);
	}
}
VD findMax(struct Node *root){
	if(root!=NULL){
		mx = max(mx, root->val);
		findMax(root->left);
		findMax(root->right);
	}
}
int main()
{
	struct Node *root;
	root = (struct Node*)malloc(sizeof(struct Node));
	root->val = 1;
	root->left->val = 2;
	root->right->val = 3;
	root->left->left->val = 4;
	root->left->right->val = 5;
	root->right->left->val = 6;
	root->right->right->val = 7;
	preorder(root);
//	pfn(root->left->left->val);
	mx = -1;
	findMax(root);
	pfn(mx);
}

















