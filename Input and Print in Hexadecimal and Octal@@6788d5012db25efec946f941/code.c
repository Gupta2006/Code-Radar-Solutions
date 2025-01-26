#include <stdio.h>
int main() {
    int a;
    int* j=&a;
    scanf("%d",&a);
    printf("Hexadecimal: %p\n",j);
    printf("Octal: %u",*j);
    return 0;
}