//Program 1 (19th July 2026)
//WAP to Find Highest and Lowest Element in an Array of 10 Integers 
#include<stdio.h>
int main() {
    int arr[]={1,4,6,7,8,2,28,9,11,3};
    printf("Elements in the Array are :-\n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int max , min ;
    max=arr[0];
    min=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The Highest Element in the Above Array is %d\n",max);
    printf("The Lowest Element in the Above Array is %d\n",min);
    return 0;
}