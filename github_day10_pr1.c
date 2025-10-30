#include<stdio.h>
int main () {

    int a,b,c ;

    printf("enter first side of triangle \n");
    scanf("%d", &a);
    
    printf("enter second side of triangle \n");
    scanf("%d", &b);
    
    printf("enter third side of triangle \n");
    scanf("%d", &c);


    if (a==b==c){
        printf("its an equilateral triangle \n");
    }
    else if (a== b || a==c || c==b){
        printf("its an isosceles triangle \n");
    }
    else if (a != b && b != c && c != a)
{
        printf("its an scalene triangle");
    }


    return 0;
}
