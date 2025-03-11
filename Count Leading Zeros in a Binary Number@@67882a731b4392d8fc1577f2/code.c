#include <stdio.h>
int countLeadingZeros(int num) {
    if (num == 0) return 32; 
    return __builtin_clz(num);
}
int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countLeadingZeros(num));
    
    return 0;
}
