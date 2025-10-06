#include<stdio.h>
int main (){

char  a ;
printf(" enter an alphabet \n ");
scanf("%c", &a);
if ( a=='a'|| a=='e'|| a=='i' || a=='o'|| a=='u' || a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U'){
    printf("the given alphabet is a vowel \n");
}
else {
    printf("the given alphabet is a consonant \n");
}

    return 0;
}