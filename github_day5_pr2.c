#include<stdio.h>
int main(){
   
    int s ,h,m;

    printf("please enter time in seconds");
    scanf("%d", &s);

    
    h=s/3600;
    m=(s%3600)/60;
    s=s%60;

    printf(" %02d:%02d,%02d",h,m,s);

    return 0;
    


}