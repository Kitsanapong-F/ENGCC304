/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/
#include<stdio.h>
int main(){
    int array[100];
    int num=0,sum=0;
    float avg=0;
    printf("Enter number n :\n");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("Enter number %d\n",i+1);
        scanf("%d",&array[i]);
    }
    for(int j=0;j<num;j++){
        sum=sum+array[j];
    }
    avg=(float)sum/num;
    printf("sum = %d\n",sum);
    printf("Avg = %.2f",avg);
   return 0;
}