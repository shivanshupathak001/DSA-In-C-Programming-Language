//Program 2 (20th July 2026)
//WAP to Define 2 Functions highest() and lowest(). Both Functions Will Accept Fixed Size Array as a Parameter , highest() and lowest() Function Returns the Highest and Lowest Element Respectively From an Array
#include<stdio.h>
int highest(int arr[10]); //int highest(int arr[]); works too
int lowest(int arr[10]); //int lowest(int arr[]); works too
int main() {
    int arr[10] = {34,23,1,81,55,0,9,27,5,62};
    printf("Elements in the Array are :-\n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The Highest Element in the Above Array is %d\n",highest(arr));
    printf("The Lowest Element in the Above Array is %d\n",lowest(arr));
    return 0;
} 
int highest(int arr[]){
    int high = arr[0];
    for(int i=0;i<10;i++){
        if(high<arr[i]){
            high=arr[i];
        }
    }
    return high;
}
int lowest(int arr[]){
    int low = arr[0];
    for(int i=0;i<10;i++){
        if(low>arr[i]){
            low=arr[i];
        }
    }
    return low;
}