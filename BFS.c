#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int adj[MAX][MAX];
int visit[MAX] = {0};
int q[MAX];
int front = 0, rear = 0;
// struct Queue{
//     int val;
//     struct Queue *next;
// };
// struct Queue* create(int val){
//     struct Queue* newnode = (struct Queue*)malloc(sizeof(struct Queue));
//     newnode->val = val;
//     newnode->next = NULL;
//     return newnode;
// }
// void insert(int val, struct Queue** head){
//     if(head==NULL) *head = create(val);
//     struct Queue* cur = *head;
//     while(cur->next != NULL) cur = cur->next;
//     cur->next = create(val);
// }
// int poll(struct Queue* head){
//     struct Queue* temp = head;
//     head = head->next;
//     int val = temp->val;
//     temp = NULL;
//     free(temp);
//     return val;
// }
// int isEmpty(struct Queue* head){
//     return head==NULL;
// }
// int size(struct Queue* head){
//     struct Queue* cur = head;
//     int len = 0;
//     while(cur){
//         len++;
//         cur = cur->next;
//     }
//     return len;
// }
// void bfs(int s, int n){
//     struct Queue* head = NULL;
//     insert(s, &head);
//     // int visit[n] = {0};
//     visit[s] = 1;
//     while(size(head)){
//         int t = poll(head);
//         printf("%d ", t);
//         for(int i=0; i<n; i++){
//             if(adj[t][i]==1&&!visit[i]){
//                 visit[i] = 1;
//                 insert(i, &head);
//             }
//         }
//     }
// }
// void print(struct Queue* head){
//     struct Queue* cur = head;
//     while(cur){
//         printf("%d ", cur->val);
//         cur = cur->next;
//     }
// }
void add(int n){
    q[rear++] = n;
}
int poll(){
    return q[front++];
}
int isEmpty(){
    return front==rear-1;
}
void show(int n){
    for(int i=0; i<n; i++){
        printf("\nVertex %d: ", i);
        for(int j=0; j<n; j++) if(adj[i][j]==1) printf("%d ", j);
    }
}
void addEdge(int s, int e){
    adj[s][e] = 1;
}
void bfs(int s, int n){
    add(s);
    visit[s] = 1;
    while(isEmpty()){
        int t = poll();
        printf("%d ", t);
        for(int i=0; i<n; i++){
            if(adj[t][i]==1&&!visit[i]){
                add(i);
                visit[i] = 1;
            }
        }
    }
}
int main(){
    printf("enter the number of vertices and edges: ");
    int v, e;
    scanf("%d %d", &v, &e);
    for(int i=0; i<e; i++){
        int S, E;
        scanf("%d %d", &S, &E);
        addEdge(S, E);
    }
    show(v);
    printf("\n");
    bfs(0, v);
    // add(2);
    // add(1);
    // add(2);
    // add(4);
    // for(int i=front; i<rear; i++) printf("%d ", q[i]);
    return 0;
}

