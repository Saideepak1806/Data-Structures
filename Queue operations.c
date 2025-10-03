#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Overflow\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Underflow\n");
    } else {
        printf("%d\n", queue[front++]);
    }
}

void display() {
    int i;
    if (front == -1 || front > rear) {
        printf("Empty\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
        scanf("%d", &choice);
        if (choice == 1) {
            scanf("%d", &value);
            enqueue(value);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            break;
        }
    }
    return 0;
}

