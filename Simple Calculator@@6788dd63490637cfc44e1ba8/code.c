#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d\n",a+b);
    }
    else if(c=='-'){
        printf("%d\n",a-b);
    }
    else if(c=='*'){
        printf("%d\n",a*b);
    }
    else if(c=='/'){
        if(b==o){
            printf("error\n");
        }
        else{
            printf("%f\n",(float)a/b);
        }
    }
    else{
        printf("error\n");
    }
    return 0;
}