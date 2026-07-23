//Program 5 (23rd July 2026)
//WAP to implement the string operations of strcat , strcmp , strcpy functions using pointer
#include<stdio.h>
void copyString(char *a , char *b);
void concatenateString(char *a , char *b);
int compareString(char *a , char *b);
int main(){
    char s1[100] , s2[100] , s3[100];
    int c;
    printf("Enter First String (Only of Single Word) :-\n");
    scanf("%s",s1);
    printf("Enter Second String (Only of Single Word) :-\n");
    scanf("%s",s2);
    copyString(s3,s1);
    printf("Copied String :- %s\n",s3);
    concatenateString(s1,s2);
    printf("Concatenated String :- %s\n",s1);
    c=compareString(s3,s2);
    if(c==0){
        printf("Both Strings are Equal\n");
    }
    else{
        printf("Strings are Not Equal\n");
    }
    return 0;
}
void copyString(char *a , char *b){
    while(*b!='\0'){
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
}
void concatenateString(char *a , char *b){
    while(*a!=0){
        a++;
    }
    while(*b!=0){
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
}
int compareString(char *a , char *b){
    while(*a==*b && *a!='\0' && *b!='\0'){
        a++;
        b++;
    }
    return *a-*b;
}