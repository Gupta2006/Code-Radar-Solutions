#include <stdio.h>

int countTrailingZeros(int num) {
    if (num == 0) return 32; 
    return __builtin_ctz(num); 
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countTrailingZeros(num));
    
    return 0;
}
