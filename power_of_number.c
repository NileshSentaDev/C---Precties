/*
   power of number 
   2*2*2*2=16
*/
#include<stdio.h>
int main(){
    int n=4;
    int m=2;
    long long int val=1;
    for (int i = 0; i < n; i++)
    {
        val=val*m;
    }
    printf("number %d to power %d is %lld ",m,n,val);
}