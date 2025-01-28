#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    // int* j=&a;
    printf("Hexadecimal: %p\n",a);
    printf("Octal: %u",a);
    return 0;
}