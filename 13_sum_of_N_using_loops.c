// sum of first 10 natural numbers using while loop .
/* 
#include<stdio.h>
 int main(){
    int sum=0, i=1;
     
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("the sum of first 10 natural numbers is %d",sum);
    return 0;
} 
    */

// sum of first 10 natural numbers using do-while loop.

/*#include<stdio.h>
int main (){
    int sum=0 , i=1 ;

    do {
        sum +=i ;
        i++ ;
    }
     while(i<=10);
     printf("sum of first 10 natural numbers is %d", sum);

     return 0;
}
*/


// sum of first ten natural numbers using for loop .

#include<stdio.h>
int main (){

    int sum=0 , i=1 ;

    for(i;i<=10;i++)
    {
        sum+=i;
    }
    printf ("sum of first 10 natural number is %d", sum);
      
    return 0;

}