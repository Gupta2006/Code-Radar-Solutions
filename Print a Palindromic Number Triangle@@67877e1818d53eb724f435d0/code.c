#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 0; j <a-i ; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=i; k++)
        {
            printf("%d",k);    
        }
        for (int l = i-1; l >=1; l--)
        {
            printf("%d",l);    
        }
        printf("\n");
    }
    return 0;
}