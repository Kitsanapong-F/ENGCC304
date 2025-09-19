
/*จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
หมายเหตุ : ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น 153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก 
จึงมีค่าเท่ากับ = 1^3 + 5^3 + 3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง) 370 = 3^3 + 7^3 + 0^3
*/
#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันหาจำนวนหลัก
int count(int n) {
    int c = 0;
    bool condition = true;
    while (condition) {
        n = n / 10;
        c++;
        if (n == 0) {
            condition = false;
        }
    }
    return c;
}

// ฟังก์ชันตรวจสอบว่าเป็น Armstrong number หรือไม่
bool arm(int num) {
    int arm = count(num);
    int i = num, sum = 0, m, x;
    bool condition1 = true, condition2;

    while (condition1) {
        int r = i % 10;   // ดึงหลักสุดท้าย
        m = 1;
        x = arm;
        condition2 = true;

        while (condition2) {
            m = m * r;
            x--;
            if (x == 0) {
                condition2 = false;
            }
        }

        sum = sum + m;   
        i = i / 10;    

        if (i == 0) {
            condition1 = false;
        }
    }

    return (sum == num);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (arm(num)) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }

    return 0;
}



