/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool Condition = true;   
    int N = 0;
    printf("Enter number : ");
    scanf("%d", &N);

    int i = N;

    do {
     if (i < 2) {
        Condition = false;  
     } else {
        int x = 2;
        bool Condition1 = true; 

        do {
        if (x >= i) {

         printf("%d ", i); 
         Condition1 = false;

        } else if (i % x == 0) {

         Condition1 = false; 

         } else {
         x = x + 1; 
            }

          } while (Condition1);
        }
        i = i - 1; 
    } while (Condition);

    return 0;
}
