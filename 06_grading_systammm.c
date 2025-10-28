#include<stdio.h>
int main() {
     
    
    
    int a ;
    
    printf("enter your marks \n");
    scanf("%d", &a);

    if (a <= 100 && a>=90 ) {
        printf("your grade is  %d A\n");
    }
    else if (a < 90 && a>=80) {
        printf("your grades in B \n");
    }
    else if (a < 80 && a>= 70){
        printf(" yours grade is C\n");
    }
    else if (a < 70 && a>=60 ){
        printf(" your grade is D\n ");
    }
    else if (a < 60  ){
        printf(" your grade is f\n ");
    }

    

    return 0;
}
