#include <stdio.h>
#include<limits.h>
int main() {
    int a;
    scanf("%d",&a);
    int msb=1<<(sizeof(int)*CHAR_BIT -1);
    if(a&msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}