#include<stdio.h>
#include <stdbool.h>
int main(){
    int coke=0,sun=0,green=0,nut=0,late=0,ame=0,som=0;
    int c=50,s=50,g=50,n=50,l=50,a=50,so=50;
    int select=0,selectsnack=0,selectwalter=0;
    char exit;
    bool Condition = true ;
    printf("welcome\n");
    while(Condition) {
     printf("ต้องการเลือกประเภทน้ำหรือขนม\nขนม = 1\nน้ำ = 2 \n");
     if(scanf("%d", &select) !=1){
        printf("กรุณาเลือก1หรือ2\n");
        while (getchar() != '\n');
        continue; 
      }
     
     if(select == 1){
        printf("เมล็ดทานตะวัน 13 บาท\nถั่วแปบ 20 บาท\nจิ้นส้มหมก 15 บาท");
        printf("\n----------------------------------------------------\n");
        printf("กรุณาเลือกสินค้า\n");
        printf("เลือกเมล็ดทานตะวัน=1\nเลือกถั่วแปบ=2\nเลือกจิ้นส้มหมก=3");
     }
     else if (select == 2){
      printf("โค้กกระป๋อง 10 บาท\nน้ำเขียวกระป๋อง 12 บาท\nอเมริกาโน่ 30 บาท\nลาเต้หวานเจี๊ยบ 35 บาท");
     }
     printf("do you want to stop(y/n)");
     scanf("%c", &exit);
     if (exit == 'y' || exit=='Y'){
      Condition = false;
     }
     
   }
   return 0;
 }
