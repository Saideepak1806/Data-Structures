#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

void init() {
    int i;
    for (i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }
}

void insert(int key) {
    int index = key % SIZE;
    int start = index;
    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
        if (index == start) {
            printf("Hash table full\n");
            return;
        }
    }
    hashTable[index] = key;
}

int search(int key) {
    int index = key % SIZE;
    int start = index;
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) return index;
        index = (index + 1) % SIZE;
        if (index == start) break;
    }
    return -1;
}

void display() {
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d -> %d\n", i, hashTable[i]);
    }
}

int main() {
    int choice, key;
    init();
    while (1) {
        printf("\n1. Insert\n2. Search\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            scanf("%d", &key);
            insert(key);
        } else if (choice == 2) {
            scanf("%d", &key);
            int pos = search(key);
            if (pos != -1) printf("Found at index %d\n", pos);
            else printf("Not found\n");
        } else if (choice == 3) {
            display();
        } else if (choice == 4) break;
    }
    return 0;
}

