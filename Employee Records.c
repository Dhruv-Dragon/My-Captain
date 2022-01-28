#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id,age;
    double salary;
} Employee;
 
int main()
{
    int n=3;

    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
            
        printf("Age: ");
        scanf("%d",&employees[i].age);
		
		printf("Phone Number: ");
        scanf("%d",&employees[i].id);

        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();
 
        printf("\n");
    }
 
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Phone Number\t: ");
        printf("%d \n",employees[i].id);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
