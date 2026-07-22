//Program 4 (Date)
//WAP to Define 2 Functions highest() and lowest(). Both Functions Will Accept an Array as a Parameter , highest() and lowest() Function Returns the Highest and Lowest Element Respectively From an Array Given By the User
#include<stdio.h>
int highest(int arr[],int n);
int lowest(int arr[],int n);
int main() {
    int n;
    printf("Enter the Size of Your Array :- \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of Your Array :- \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Your Entered Array is :- \n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The Highest Element in Your Given Array is :- %d \n",highest(arr,n));
    printf("The Lowest Element in Your Given Array is :- %d \n",lowest(arr,n));
    return 0;
}
int highest(int arr[],int n){
    int high=arr[0];
    for(int i=0;i<n;i++){
        if(high<arr[i]){
            high=arr[i];
        }
    }
    return high;
}
int lowest(int arr[],int n){
    int low=arr[0];
    for(int i=0;i<n;i++){
        if(low>arr[i]){
            low=arr[i];
        }
    }
    return low;
}