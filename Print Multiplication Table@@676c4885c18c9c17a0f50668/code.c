#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d",a,i,a*i);
        printf("\n");
    }
    return 0;
}