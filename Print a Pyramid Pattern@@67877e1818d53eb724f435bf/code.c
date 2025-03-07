#include <stdio.h>
int main() {
int i, j,n;
scanf("%d",&n);
for (i =1; i <=n; i++) {
    for (j = 0; j<n-i; j++) {
        printf(" ");}
    for(int k=0;k<i;k++){
            printf("*");
        }
    printf("\n"); }
return 0;}