/* 
   factorial of given number 
   user enter : 7
   out put :
   given number 7 factorial is : 5040
*/
#include<stdio.h>
int fact(int n){
    int val=1;
    for (int i = n; i > 1; i--)
    {
        val *= i;
    }
    return val;

}
int main(){
    int n;
    printf("Enter a number you want to factorail : ");
    scanf("%d",&n);
    int factorail=fact(n);

    printf("Given number %d factorail is : %d ",n,factorail);
}