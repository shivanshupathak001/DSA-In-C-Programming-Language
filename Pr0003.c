//Program 3 (21st July 2026)
//WAP to Define 2 Functions highest() and lowest(). Both Functions Will Accept Fixed Size Array as a Parameter , highest() and lowest() Function Prints the Highest and Lowest Element Respectively From an Fixed Sized Array Given By the User
#include<stdio.h>
void highest(int arr[]); //void highest(int arr[8]); works too
void lowest(int arr[]); //void lowest(int arr[8]); works too
int main(){
    int arr[8];
    printf("Enter 8 Elements For an Array :- \n");
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Given Array is :- \n");
    for(int i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    highest(arr);
    lowest(arr);
    return 0;
}
void highest(int arr[]){
    int max=arr[0];
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The Highest Element in Your Given Array is %d\n",max);
}
void lowest(int arr[]){
    int min=arr[0];
    for(int i=0;i<8;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The Lowest Element in Your Given Array is %d\n",min);
}