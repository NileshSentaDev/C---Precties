/*
   revers user enter number 
   user enter : 52534
   out put    : 43525
*/
#include<stdio.h>
int revers(int num){
    int rev=0,rem;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}
int main(){
    int num;
    printf("Enter a number you want to revers : ");
    scanf("%d",&num);
    int rev=revers(num);

    printf("Reveres number is %d ",rev);

}