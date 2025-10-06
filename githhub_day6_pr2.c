#include<stdio.h>
int main (){

    int a ;

    printf(" enter an integer \n");
    scanf("%d", &a);

    if (a>0){
        printf("the given number is a positive number \n");
    }

    else if (a<0) {
        printf ("the given number is a negative integer \n");
    }
    else {
        printf ("the given number is zero \n");
    }
    
    return 0;
    

}