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
struct Node{
    int val;
    struct node* left;
    struct node* right;
    int height;
};
struct queue{
    struct Node* node;
    struct queue* next;
};
struct Node* create(int val){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->val = val;
    newnode->right = NULL;
    newnode->left = NULL;
    return newnode;
}
VD add(struct Node** root, int val){
    struct Node* newnode = create(val);
    if(*root==NULL)
        *root = newnode;
    else{
        struct Node* cur = *root;
        if(cur->val<val) add(&cur->right, val);
        else if(cur->val>val) add(&cur->left, val);
    }
}
VD inorder(struct Node* root){
    if(root==NULL) return;
    inorder(root->left);
    pfn(root->val) _
    inorder(root->right);
}
VD offer(struct queue** head, struct Node* root){
    struct queue* newnode = (struct queue*)malloc(sizeof(struct queue));
    newnode->node = root;
    if(*head==NULL){
        *head = root;
    }else{
        struct queue* cur = *head;
        while(cur->next!=NULL){
            cur = cur->next;
        }
        cur->next = newnode;
    }
}
struct queue* poll(struct queue* head){
    struct queue* temp = head;
    head = head->next;
    return temp;
}
int size(struct queue* head){
    struct queue* temp = head;
    int len = 0;
    while(temp){
        len++;
        temp = temp->next;
    }
}
void levelorder(struct Node* root){
    struct queue* q = NULL;
    offer(&q, root);
    $ i;
    while(size(q)){
        int len = size(q);
        FOR(i, 1, len+1, 1){
            struct Node* cur = poll(q);
            pfn(cur->val) _
            if(cur->left) offer(&q, cur->left);
            if(cur->right) offer(&q, cur->right);
        }
        nl
    }
}
VD print(struct queue* head){
    while(head){
        pfn(head->node->val) _
        head = head->next;
    }
}
int main(){
    $ n;
    sfn(n)
    $ i;
    struct Node* root = NULL;
    struct queue* q = NULL;
    FOR(i, 0, n, 1){
        // int num = 
        add(&root, (rand()%100+1));
        offer(&q, root);
    }
    print(q);
    // levelorder(root);
    return 0;
}