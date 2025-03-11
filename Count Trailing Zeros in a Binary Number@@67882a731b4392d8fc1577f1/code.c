#include <stdio.h>

int countTrailingZeros(int num) {
    if (num == 0) return 32; // All bits are zero
    return __builtin_ctz(num); // GCC/Clang built-in function
}

int main() {
    int num;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Count and print trailing zeros
    printf("Number of trailing zeros: %d\n", countTrailingZeros(num));
    
    return 0;
}
