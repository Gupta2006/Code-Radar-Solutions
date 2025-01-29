#include <stdio.h>
#include<limits.h>
int main() {
    int a;
    scanf("%d",&a);
    int msb=1<<(sizeof(int)*char_bit -1);
    if(a&msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}