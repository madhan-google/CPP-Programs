#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int visit[MAX]={0}, adj[MAX][MAX];
void addEdge(int s, int e){
    adj[s][e] = 1;
}
void show(int n){
    for(int i=0; i<n; i++){
        printf("\nVertex %d: ", i);
        for(int j=0; j<n; j++) if(adj[i][j]==1) printf("%d ", j);
    }
}
void dfs(int s, int n){
    printf("%d ", s);
    visit[s] = 1;
    for(int i=0; i<n; i++) if(adj[s][i]==1&&!visit[i]) dfs(i, n);
}
int main(){
    int v, e;
    printf("enter the number of vertices and edges: ");
    scanf("%d %d", &v, &e);
    for(int i=0; i<e; i++){
        int S, E;
        scanf("%d %d", &S, &E);
        addEdge(S, E);
    }
    show(v);
    dfs(0, v);
    return 0;
}