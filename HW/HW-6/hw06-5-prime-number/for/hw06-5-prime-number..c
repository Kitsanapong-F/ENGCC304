/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
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
int main(){
int n=0;
printf("Enter number :\n");
scanf("%d",&n);
int i=n;
for(i=n;i>=2;i--){
    int x=2;
     for ( x=2 ; x < i; x++) {
            if (i % x == 0) {
                break;
            }
        }
          if(x==i){ 
            printf("%d ", i);
              
          }
    }
    return 0;
}