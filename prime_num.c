/* 
  prime number or not prime number check
  user enter : 11
  out put    : Not prime number 

  user enter : 25
  out put    : prime number 

*/
#include<stdio.h>
int main(){
    int n,flag=0;
    printf("Enter any number you want to check :");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)     
    {
        if (n%i==0)
        {
            flag=1;
        }
        
    }
    if (flag==0)
    {
        printf("Prime number");
    }
    else
    printf("Not prime number");
}