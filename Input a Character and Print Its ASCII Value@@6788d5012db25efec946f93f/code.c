#include <stdio.h>
int main() {
    char a;
    char* j= &a;
    scanf("%c",&a);
    printf("ASCII Value: %u", a);
    return 0;
}