#include <stdio.h>
#include <stdlib.h>

struct MinHeap {
    int* heapArray;
    int size;
    int capacity;
};

struct MinHeap* createMinHeap(int capacity) {
    struct MinHeap* heap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    heap->capacity = capacity;
    heap->size = 0;
    heap->heapArray = (int*)malloc(capacity * sizeof(int));
    return heap;
}

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return 2 * i + 1;
}

int rightChild(int i) {
    return 2 * i + 2;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(struct MinHeap* heap, int index) {
    while (index > 0 && heap->heapArray[parent(index)] > heap->heapArray[index]) {
        swap(&heap->heapArray[parent(index)], &heap->heapArray[index]);
        index = parent(index);
    }
}

void insert(struct MinHeap* heap, int value) {
    if (heap->size == heap->capacity) {
        printf("Heap is full. Cannot insert.\n");
        return;
    }

    heap->heapArray[heap->size] = value;
    heap->size++;
    heapifyUp(heap, heap->size - 1);
}

void heapifyDown(struct MinHeap* heap, int index) {
    int minIndex = index;
    int left = leftChild(index);
    int right = rightChild(index);

    if (left < heap->size && heap->heapArray[left] < heap->heapArray[minIndex]) {
        minIndex = left;
    }

    if (right < heap->size && heap->heapArray[right] < heap->heapArray[minIndex]) {
        minIndex = right;
    }

    if (index != minIndex) {
        swap(&heap->heapArray[index], &heap->heapArray[minIndex]);
        heapifyDown(heap, minIndex);
    }
}

int extractMin(struct MinHeap* heap) {
    if (heap->size <= 0) {
        printf("Heap is empty.\n");
        return -1;
    }

    if (heap->size == 1) {
        heap->size--;
        return heap->heapArray[0];
    }

    int root = heap->heapArray[0];
    heap->heapArray[0] = heap->heapArray[heap->size - 1];
    heap->size--;
    heapifyDown(heap, 0);

    return root;
}

int main() {
    struct MinHeap* minHeap = createMinHeap(10);

    insert(minHeap, 3);
    insert(minHeap, 2);
    insert(minHeap, 1);

    printf("Minimum element: %d\n", extractMin(minHeap));

    return 0;
}
