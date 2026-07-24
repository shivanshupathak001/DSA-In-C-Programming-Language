//Program 6 (24th July 2026)
//WAP to define the structure of an employee with member's name , age and salary , then create an array of such employee records and display details of employee with highest salary
#include<stdio.h>
struct Employee{
    char name[100];
    int age;
    float salary;
};
int main() {
    struct Employee emp[100];
    int n;
    int max;
    printf("Enter Number of Employee :-\n");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        printf("Enter Name :-\n");
        scanf("%s",emp[i].name);
        printf("Enter Age :-\n");
        scanf("%d",&emp[i].age);
        printf("Enter Salary :-\n");
        scanf("%f",&emp[i].salary);
    }
    max=0;
    for(int i=0 ; i<n ; i++){
        if(emp[i].salary > emp[max].salary){
            max=i;
        }
    }
    printf("Employee with Highest Salary :- \n");
    printf("Name :- %s\n",emp[max].name);
    printf("Age :- %d\n",emp[max].age);
    printf("Salary :- %.2f\n",emp[max].salary);
    return 0;
}