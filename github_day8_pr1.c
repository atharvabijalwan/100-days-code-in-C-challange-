#include<stdio.h>
int main(){
     
    char x ;

    printf("enter lowercase/uppercase/digits/special characters :");
    scanf("%c", &x);

    if (x>=65 && x<=90){
        printf("the given character is an uppercase letter %c\n", x);
    }
    else if (x>=97 && x<=122){
        printf("the given character is a lowercase letter %c\n", x);
    }
    else if (x>=48 && x<=57){
        printf("the given character is a digit %c\n", x);
    }
    else {
        printf("the given character is a special character %c\n", x);
    }
    return 0;
}