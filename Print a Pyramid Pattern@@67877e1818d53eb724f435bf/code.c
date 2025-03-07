#include <stdio.h>
int main() {
int i, j,n;
scanf("%d",&n);
for (i =1; i <=n-i; i++) {
    for (j = 1; j<=i; j++) {
        printf(" ");}
    for(int k=1;k<=i;k++){
            printf("*");
        }

    printf("\n"); }
return 0;}