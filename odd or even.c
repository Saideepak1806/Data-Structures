#include <stdio.h>

int main() {
    int n, i, num[50];

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &num[i]);
    }

    printf("Even numbers: ");
    for(i=0; i<n; i++) {
        if(num[i] % 2 == 0)
            printf("%d ", num[i]);
    }

    printf("\nOdd numbers: ");
    for(i=0; i<n; i++) {
        if(num[i] % 2 != 0)
            printf("%d ", num[i]);
    }

    return 0;
}

