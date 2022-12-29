/*
   max number 
   given number : 1,4,66,33,888,55,44,3,2
   out put :
   max number is : 888

*/
#include<stdio.h>
int return_max(int array[],int n){
    int max=0;
    for (int i = 1; i < n; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        
    }
    return max;

}
int main(){
    int arr[]={1,4,66,33,888,55,44,3,2};
    int max=return_max(arr,9);
    printf("Maximem number is %d ",max);
}