#include<stdio.h>
int main(){

    int a ;

    

    printf(" number of days you are late to return the liberary book :");
     scanf("%d", &a);

     if(a<=5){
         printf(" you will have to pay fine of %d\n", a*2);
     }
     else if(10>=a>5){
        printf(" you will have to pay fine of %d \n", (10+((a-5)*4)));
     }
     else if (10<a<=30){
        printf(" you will have to pay fine of %d \n", (30+(a-10)*6));
     }

    else if(a>30){
        printf("your membership is cancelled\n");
    }

    return 0;

}
