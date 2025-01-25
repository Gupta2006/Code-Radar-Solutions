#include <stdio.h>
int main() {
    char a;
    char* j= &a;
    scanf("%c",&a);
    printf("ASCII Value: %u", *j);
    return 0;
}