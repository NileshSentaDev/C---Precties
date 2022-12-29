/*
   simple star pattern print 
   user enter : 4
   out put :
                *
                * *
                * * *
                * * * *

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number you want to print start : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}