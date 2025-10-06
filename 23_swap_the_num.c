#include<stdio.h>

void swap(int* , int*);

void swap(int* a ,int* b){
    int temp;
    temp =*a ;
    *a=*b;
    *b=temp;

}
      int main(){
        
        printf("enter the value of first number a ") ;
        swap(&a,&b);
         
        printf("the value of a is %d\n the value of b is %d", a,b);
        return 0;
      }