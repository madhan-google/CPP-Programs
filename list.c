#include<stdio.h>
struct Node{
	struct Node *next;
	int val;
} *head=NULL;
//struct Node *head;
void push(int val){
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->val = val;
	if(head==NULL){
		newnode->next = NULL;
		head = newnode;
		return;
	}
	newnode->next = head;
	head = newnode;
}
void append(int val){
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->next = NULL;
	newnode->val = val;
	if(head==NULL){
		head = newnode;
		return;
	}
	struct Node *cur = head;
	while(cur->next!=NULL){
		cur = cur->next;
	}
	cur->next = newnode;
}
void print(){
	while(head!=NULL){
		printf("%d->", head->val);
		head = head->next;
	}
}
int main(){
	append(1);
	append(2);
	append(3);
	append(8);
	append(4);
	push(10);
	print();
}
