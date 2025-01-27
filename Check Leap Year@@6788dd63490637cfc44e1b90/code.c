#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if((a%400==0) || ((a%100) && (a%400)) ){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}