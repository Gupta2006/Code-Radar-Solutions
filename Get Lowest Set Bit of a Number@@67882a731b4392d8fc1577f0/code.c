#include <stdio.h>
int getLowestSetBitPosition(int num) {
    if (num == 0) return -1; 
    return __builtin_ctz(num); 
}

int main() {
    int num;
    scanf("%d", &num);
    int position = getLowestSetBitPosition(num);
    if (position != -1)
        printf("%d\n", position);
    else
        printf("No set bits found (input was 0).\n");
    return 0;
}
