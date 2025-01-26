#include <stdio.h>
int main() {
    int a;
    scanf("a",&a);
    lsb=a&1;
    if(lsb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}