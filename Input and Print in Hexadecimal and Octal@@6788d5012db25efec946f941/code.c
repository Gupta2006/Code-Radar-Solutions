#include <stdio.h>
int main() {
    int a;
    int* j=&a;
    scanf("%d",&a);
    printf("Hexadecimal: %p",j);
    printf("Octal: %o",*j);
    return 0;
}