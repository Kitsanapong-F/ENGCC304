#include <stdio.h>
int main() {
    char ID[11];  // เก็บรหัสพนักงานได้สูงสุด 10 ตัวอักษร + '\0'
    int hrs = 0, amount = 0;
    float Salary=0;
    printf("Input the Employees ID (Max. 10 chars):\n");
    scanf("%10s", ID);  
    printf("Input the working hrs:\n");
    scanf("%d", &hrs);
    printf("Salary amount/hr:\n");
    scanf("%d", &amount);
    Salary = hrs * amount;
    printf("Expected Output:");
    printf("\nEmployee ID = %s\n", ID);
    printf("Salary = U$ %.2f",Salary);
    return 0;
}//end main function
