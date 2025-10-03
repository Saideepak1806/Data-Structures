#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, key, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element %d found at position %d\n", key, i+1);
            found = 1;
            break;
        }
    }
    if (!found) printf("Element not found\n");

    free(a);
    return 0;
}

