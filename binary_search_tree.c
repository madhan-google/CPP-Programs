#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node* left;
    struct node* right;
};
// struct 
struct node* create(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->val = val;
    return newnode;
}
void add(struct node** root, int val){
    struct node* newnode = create(val);
    if(*root==NULL){
        *root = newnode;
    }else{
        struct node* cur = *root;
        if(cur->val>val) add(&cur->left, val);
        else if(cur->val<val) add(&cur->right, val);
    }
}
void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ", root->val);
        preorder(root->left);
        preorder(root->right);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    //printf("%ld", sizeof(struct node));
    struct node* root = NULL;
    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        add(&root, num);
    }
    preorder(root);
}