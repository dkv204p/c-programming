#include <stdio.h>

#define MAX_VERTICES 10

struct Graph {
    int vertices;
    int matrix[MAX_VERTICES][MAX_VERTICES];
};

void initGraph(struct Graph* g, int vertices) {
    g->vertices = vertices;
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            g->matrix[i][j] = 0;
        }
    }
}

void addEdge(struct Graph* g, int start, int end) {
    if (start >= 0 && start < g->vertices && end >= 0 && end < g->vertices) {
        g->matrix[start][end] = 1;
        g->matrix[end][start] = 1; // Assuming undirected graph
    } else {
        printf("Invalid vertices.\n");
    }
}

void dfs(struct Graph* g, int vertex, int visited[]) {
    printf("%d ", vertex);
    visited[vertex] = 1;

    for (int i = 0; i < g->vertices; i++) {
        if (g->matrix[vertex][i] == 1 && !visited[i]) {
            dfs(g, i, visited);
        }
    }
}

void dfsTraversal(struct Graph* g, int start) {
    int visited[MAX_VERTICES] = {0};
    printf("DFS Traversal starting from vertex %d: ", start);
    dfs(g, start, visited);
    printf("\n");
}

int main() {
    struct Graph graph;
    initGraph(&graph, 5);

    addEdge(&graph, 0, 1);
    addEdge(&graph, 0, 2);
    addEdge(&graph, 1, 3);
    addEdge(&graph, 3, 4);

    dfsTraversal(&graph, 0);

    return 0;
}
