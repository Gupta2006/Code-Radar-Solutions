#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int result = setNthBit(num, n);
    printf("%d\n",result);
    
    return 0;
}
