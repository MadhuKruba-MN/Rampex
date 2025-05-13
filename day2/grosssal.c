#include <stdio.h>

int main() {
    float basic, hra, da, grossSalary;

   
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    printf("Enter the HRA (House Rent Allowance): ");
    scanf("%f", &hra);
    printf("Enter the DA (Dearness Allowance): ");
    scanf("%f", &da);


    grossSalary = basic + hra + da;

    
    printf("The Gross Salary is: %.2f\n", grossSalary);

    return 0;
}