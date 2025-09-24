#include <stdio.h>

int main() {
int a[2][2], b[2][2], c[2][2];
int i, j;

printf("Enter 4 elements of first 2x2 matrix:\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);

printf("Enter 4 elements of second 2x2 matrix:\n");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&b[i][j]);

for(i=0;i<2;i++)
for(j=0;j<2;j++)
c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j];

printf("Resultant matrix:\n");
for(i=0;i<2;i++) {
for(j=0;j<2;j++)
printf("%d ",c[i][j]);
printf("\n");
}
    return 0;
}

