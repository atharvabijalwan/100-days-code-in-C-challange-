#include<stdio.h>

int sum(int , int);

int sum(int x , int y){

    return (x+y);
}
int main (){

    int a ,b ;

    printf("enter the first number\n ");
    scanf("%d", &a);
    
    printf("enter the second number \n");
    scanf("%d", &b);

    printf("the sum of first number %d and second number %d is %d \n",a,b,sum(a,b));
    return 0 ;
}