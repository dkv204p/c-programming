#include <stdio.h>
#include <stdlib.h>

struct GraphNode {
    int data;
    struct GraphNode** neighbors;
    int numNeighbors;
    int visited;
};

struct GraphNode* createNode(int newData) {
    struct GraphNode* newNode = (struct GraphNode*)malloc(sizeof(struct GraphNode));
    newNode->data = newData;
    newNode->neighbors = NULL;
    newNode->numNeighbors = 0;
    newNode->visited = 0;
    return newNode;
}

void addNeighbor(struct GraphNode* node, struct GraphNode* neighbor) {
    node->neighbors = realloc(node->neighbors, (node->numNeighbors + 1) * sizeof(struct GraphNode*));
    node->neighbors[node->numNeighbors++] = neighbor;
}

void dfs(struct GraphNode* start) {
    if (start == NULL) {
        return;
    }

    printf("%d ", start->data);
    start->visited = 1;

    for (int i = 0; i < start->numNeighbors; i++) {
        if (!start->neighbors[i]->visited) {
            dfs(start->neighbors[i]);
        }
    }
}

int main() {
    struct GraphNode* node1 = createNode(1);
    struct GraphNode* node2 = createNode(2);
    struct GraphNode* node3 = createNode(3);
    struct GraphNode* node4 = createNode(4);

    addNeighbor(node1, node2);
    addNeighbor(node1, node3);
    addNeighbor(node2, node4);
    addNeighbor(node3, node4);

    printf("DFS traversal starting from node 1: ");
    dfs(node1);

    return 0;
}
