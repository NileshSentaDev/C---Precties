/*
   check user given number prime umber print 
   user enter : 
   first number : 2
   second number: 30
   out put      : 2 3 5 7 11 13 17 19 23 29
*/
#include<stdio.h>
int isprime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int n1,n2;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);

    printf("Butween %d and %d prime number ",n1,n2);
    for (int i = n1; i <= n2; i++)
    {
        if (isprime(i))
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}