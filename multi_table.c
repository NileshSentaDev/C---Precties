//  Multiplication table  

#include<stdio.h>
int main(){
    int num;
    printf("Enter number you want to multiplie : ");
    scanf("%d",&num);

    printf("Your entered number %d table ");

    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d X %d = %d ",num,i,i*num);
    }
    
}