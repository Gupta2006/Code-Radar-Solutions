#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%f",(float)a/b);
        }
    }
    else{
        printf("error");
    }
    return 0;
}