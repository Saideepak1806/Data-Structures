#include <stdio.h>
#define MAX 5

int main() {
    int stack[MAX], top = -1;
    int choice, value, i;

    while (1) {
        printf("\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT\n");
        scanf("%d", &choice);

        if (choice == 1) {
            if (top == MAX - 1) {
                printf("Overflow\n");
            } else {
                scanf("%d", &value);
                stack[++top] = value;
            }
        } else if (choice == 2) {
            if (top == -1) {
                printf("Underflow\n");
            } else {
                printf("%d\n", stack[top--]);
            }
        } else if (choice == 3) {
            if (top == -1) {
                printf("Empty\n");
            } else {
                printf("%d\n", stack[top]);
            }
        } else if (choice == 4) {
            if (top == -1) {
                printf("Empty\n");
            } else {
                for (i = 0; i <= top; i++) printf("%d ", stack[i]);
                printf("\n");
            }
        } else if (choice == 5) {
            break;
        }
    }
    return 0;
}

