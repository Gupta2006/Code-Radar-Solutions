#include <stdio.h>

int flipBits(int num) {
    return ~num;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", flipBits(num));
    
    return 0;
}
