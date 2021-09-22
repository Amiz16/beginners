#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    printf("Enter the two values to swap\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%dandb=%d\n"
    ,a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%dandb=%d\n",a,b);
    return 0;
    
}