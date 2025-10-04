#include <stdio.h>
#include <locale.h>

int main() {
    char ID[11];
    int hrs = 0, amount = 0;
    double Salary = 0;

    // เปิดใช้ locale เพื่อให้ printf รองรับ %' ใส่ comma อัตโนมัติ
    setlocale(LC_NUMERIC, "");

    printf("Input the Employees ID (Max. 10 chars):\n");
    scanf("%10s", ID);

    printf("Input the working hrs:\n");
    scanf("%d", &hrs);

    printf("Salary amount/hr:\n");
    scanf("%d", &amount);

    Salary = hrs * amount;

    printf("Employees ID = %s\n", ID);
    printf("Salary = U$ %'.2f\n", Salary);

    return 0;
}
