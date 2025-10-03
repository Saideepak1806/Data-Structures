#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX], n = 0, choice, pos, value, i;

    while(1) {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(n >= MAX) {
                    printf("Array is full.\n");
                    break;
                }
                printf("Enter position (1 to %d): ", n+1);
                scanf("%d", &pos);
                if(pos < 1 || pos > n+1) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter value: ");
                scanf("%d", &value);
                for(i = n; i >= pos; i--) {
                    arr[i] = arr[i-1];
                }
                arr[pos-1] = value;
                n++;
                break;

            case 2:
                if(n == 0) {
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter position (1 to %d): ", n);
                scanf("%d", &pos);
                if(pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                for(i = pos-1; i < n-1; i++) {
                    arr[i] = arr[i+1];
                }
                n--;
                break;

            case 3:
                if(n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}

