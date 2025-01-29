#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int mcb=1<<(sizeof(int)*char_bit -1);
    if(a&mcb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}