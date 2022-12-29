/*
    factorail of number 
    user enter : 5
    out put : Given number %5 factorail is : 120
    
*/
#include<stdio.h>
int fact(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    return n * fact(n-1);
}
int main(){
    int n;
    printf("Enter number you want to factorail : ");
    scanf("%d",&n);
    int factorail=fact(n);

    printf("Given number %d factorail is : %d",n,factorail);
}