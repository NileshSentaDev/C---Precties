/*
   star pattern print 
   user enter : 3
   uot put : 
                   *
                *  *
             *  *  *


*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number you want to print star : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j>=n-1)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
}