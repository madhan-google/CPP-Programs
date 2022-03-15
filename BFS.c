#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int adj[MAX][MAX];
int visit[MAX] = {0};
int q[MAX+MAX];
int front = 0, rear = 0;
void add(int n){
    q[rear++] = n;
}
int poll(){
    return q[front++];
}
int isEmpty(){
    return front==rear;
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
    while(!isEmpty()){
        int t = poll();
        printf("%d ", t);
        for(int i=0; i<n; i++)
            if(adj[t][i]==1&&!visit[i]){
                add(i);
                visit[i] = 1;
            }
    }
}
int main(){
    printf("enter the number of vertices and edges: ");
    int v, e;
    scanf("%d %d", &v, &e);
    printf("enter the source vertex and destination vertex: ");
    for(int i=0; i<e; i++){
        int S, E;
        scanf("%d %d", &S, &E);
        addEdge(S, E);
    }
    show(v);
    printf("\nBFS Traversal: ");
    bfs(0, v);
    return 0;
}

