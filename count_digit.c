/* 
   count digits 
   user enter : 34253 
   out put:
   ther are number of digit : 5
   
*/
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter number you want to count : ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("There are 1 digit in the number ");
    }
    else
    {
    
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("There are number of digit : %d",count);
    }
}