#include<stdio.h>

int mian(){
    int a,b ;

    printf("enter the 1st number:\n");
    scanf("%d", &a);
    
    printf("enter the 2nd number:\n");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("the value od a is %d and the value of b is %d\n",a,b);
    return 0;
}