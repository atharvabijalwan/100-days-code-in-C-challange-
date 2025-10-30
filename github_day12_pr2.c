#include<stdio.h>
int main (){
    int u ;

    printf("enter the units of electricity used :");
    scanf("%d", &u);

    if (u<=100){
        printf("your toal bill is rs %d\n",5*u);
    }
    else if (u>100 && u<=200){
        printf("your total bill is rs %d\n",500+((u-100)*7));
    }
    else if (u>200 && u<=300){
        printf("your total bill is rs %d\n", 1200+((u-200)*10));
    }
    else if (u>300){
        printf("your total bill is rs: %d\n",2200+((u-300)*12));
    }

return 0;
}