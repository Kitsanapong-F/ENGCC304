/*จงเขียนโปรแกรมเพื่อสลับตัวเลขจำนวนเต็มโดยใช้ Pointer โดยการสลับค่าตัวแปร จะต้องกระทำที่ฟังก์ชันภายนอกฟังก์ชันหลักเท่านั้น โปรแกรมจึงควรมีลักษณะการทำงานดังนี้

ประกาศตัวแปร num1 และ num2 โดยกำหนดให้ค่าทั้ง 2 ตัวแปรแตกต่างกัน
ประกาศตัวแปร ptr1 และ ptr2 เป็น Pointer เพื่อเก็บค่าที่อยู่ของ num1 และ num2 ตามลำดับ
เรียกใช้ฟังก์ชันชื่อว่า swapNumbers โดยการส่ง Pointer ทั้ง 2 ค่าเข้าไปในฟังก์ชัน (ห้ามใช้ตัวแปรพักค่าเด็ดขาด)
ภายในตัวแปร swapNumbers ให้กับการสลับค่า
ในฟังก์ชันหลัก เรียกใช้งานฟังก์ชัน swapNumbers โดยการส่ง ptr1 และ ptr2 เข้าไป
ในฟังก์ชันหลัก ให้แสดงค่าภายในตัวแปร num1 และ num2 ทั้งก่อนและหลังเรียกใช้งาน swapNumbers*/
#include<stdio.h>
void swapNumbers(int *ptr1,int *ptr2);
int main(){
    int num1=0;
    int num2=0;
    printf("Enter num1 :");
    scanf("%d",&num1);
    printf("Enter num2 :");
    scanf("%d",&num2);
    printf("Before swap (num1 & num2) : %d %d\n",num1,num2);
    swapNumbers(&num1,&num2);
    printf("After swap (num1 & num2) :%d %d\n",num1,num2);
}

void swapNumbers(int *ptr1,int *ptr2){
    
    *ptr1=*ptr2-*ptr1;
    *ptr2=*ptr2-*ptr1;
    *ptr1=*ptr2+*ptr1;
    
}