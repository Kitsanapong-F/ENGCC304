#include<stdio.h>
int main(){
    int levvel=0,monet=0,sbonus=0,project=0,age=0,bonus=0;
    int sum = 0;
        printf("ตำแหน่งงาน(1-3)");
        scanf("%d",&levvel);
        printf("จำนวนปีที่ทำงาน (อายุงาน)");
        scanf("%d",&age);
        printf("Project that you finish : ");
        scanf("%d" , & project);

        if(levvel == 1) {
            monet = 20000;
        }

        else if (levvel == 2) {
            monet = 35000;
        }

        else if (levvel== 3 ) {
            monet = 50000 ;
        }

        else {
            printf("กรุณากรอกใหม่") ; 
        }

        if(age < 1 ) {
            bonus = 0 ;
        }
        else if (age >= 1 && age <= 3 ){
            bonus = monet *10 / 100 ;
        }
        
        else if (age >= 4 && age <= 5) {
            bonus = monet *15 / 100 ;
        }

        else if (age >= 6 ) {
            bonus = monet *20 /100 ;
        }

        if (project > 5) {
            sbonus = (monet + bonus) *5 / 100 ;
        }
        sum = monet + bonus + sbonus ;
        printf("money = %d\n" , monet);
        printf("bonus = %d\n" , bonus);
        printf("sbonus = %d\n" , sbonus);
        printf("sum = %d\n" , sum);
        return 0 ;
}