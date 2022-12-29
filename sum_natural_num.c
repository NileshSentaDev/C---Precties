/* sum of natural number (1+2+3+n......)
   user enter : 10
   out put :
   sum of natural number is : 55

*/
#include<stdio.h>
int main(){
    int n,sum=0;

    printf("Enter natural number you want to sum : ");
    scanf("%d",&n);

    // for (int i = 1; i <= n; i++)
    // {
    //     sum=sum+i;
    // }

    sum=(n*n+n)/2;
    printf("Entered natural number %d sum of given number : %d ",n,sum);
}