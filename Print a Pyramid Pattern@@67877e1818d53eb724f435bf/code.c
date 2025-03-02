#include <stdio.h>
int main() {
int i, j,n;
printf("Enter the Number:\n");
scanf("%d",&n);
for (i =1; i <=n-i; i++) {
    for (j = 1; j<=i; j++) {
        printf(" ");
        for(int k=1;k<=j;k++){
            printf("*");
        }
}
    printf("\n"); }
return 0;}