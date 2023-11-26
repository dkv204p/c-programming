#include <stdio.h>
#include <stdlib.h>

// Forward declarations
struct GraphNode;
struct Queue;
void enqueue(struct Queue* queue, struct GraphNode* data);
struct GraphNode* dequeue(struct Queue* queue);

struct GraphNode {
    int data;
    struct GraphNode** neighbors;
    int numNeighbors;
    int visited;
};

struct QueueNode {
    struct GraphNode* data;
    struct QueueNode* next;
};

struct Queue {
    struct QueueNode* front;
    struct QueueNode* rear;
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

void bfs(struct GraphNode* start) {
    if (start == NULL) {
        return;
    }

    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;

    enqueue(queue, start);
    start->visited = 1;

    while (queue->front != NULL) {
        struct GraphNode* current = dequeue(queue);
        printf("%d ", current->data);

        for (int i = 0; i < current->numNeighbors; i++) {
            if (!current->neighbors[i]->visited) {
                enqueue(queue, current->neighbors[i]);
                current->neighbors[i]->visited = 1;
            }
        }
    }
}

// Function to add a node to the queue
void enqueue(struct Queue* queue, struct GraphNode* data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Function to remove a node from the queue
struct GraphNode* dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        return NULL;
    }

    struct QueueNode* temp = queue->front;
    struct GraphNode* data = temp->data;

    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return data;
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

    printf("BFS traversal starting from node 1: ");
    bfs(node1);

    return 0;
}
