#include <stdio.h>
int main() {
    int a;
    scanf("a",&a);
    if(a&1){
        printf("Set\n");
    }
    else{
        printf("Not Set");
    }
    return 0;
}