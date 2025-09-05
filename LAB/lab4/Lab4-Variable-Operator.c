
#include <stdio.h>
#include <ctype.h>

int main() {
    char employeeid[11];
    int i = 0 ; 
    float Salary=0,hr=0 ;
    char ch;

    printf("Employees ID (Max. 10 chars): ");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (!isdigit(ch)) {
            printf("\nกรอกแค่EmployeesIdเท่านั้น.\n");
            return 1;
        }

        if (i >= 10) {
            printf("\nไม่พบEmployeesID\n");
            return 1;
        }
        employeeid[i++] = ch;
    }
    employeeid[i] = '\0';
    printf("the working hrs:");
    scanf ("%f",&hr);
    
    printf("Salary amount/hr:" );
    scanf("%f",&Salary);
    
    printf("\nEmployees ID: %s\n", employeeid);
    printf("Salary = U$%0.2f",hr*Salary);


    return 0;
}

    
   

