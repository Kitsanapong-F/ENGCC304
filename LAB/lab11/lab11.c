/*จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
หมายเหตุ : ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น 153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 + 5^3 + 3^3 
โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง) 370 = 3^3 + 7^3 + 0^3*/
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int strong(int j);

int main(){
    int str;
    printf("Enter Number:");
    scanf("%d",&str);
    if(str==srotng(str)){
        printf("Pass.");
    }
    else{
        printf("not Pass.");
    }
    return 0;
}

int strong(int j){
    int arm=0, x=j;
    int sum=0;
    bool con=true;
    while (con)
    {
        j=j/10;
        if(j==0){
            con=false;
        }
        arm++;
    }
    int array[arm];
    for(int i=0;i<arm;i++){
        array[i]=x%10;
        x=x/10;
    }
    for(int j=0;j<arm;j++){
        sum=sum+pow(array[j],arm);
    }
      return sum; 
}