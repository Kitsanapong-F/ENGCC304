// จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)
#include<stdio.h>
int main(){
    int n = 0,i=0;
    printf("enter N\n");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("Enter value[%d]:",i);
        scanf("%d", &num[i]);
    }

    printf("Index: ");
    for(i=0;i<n;i++){
        printf("%d ",i);
    }

    printf("\nArray: ");
    for(i=0;i<n;i++){
        int x;
        for(x = 2; x < num[i]; x++){
            if(num[i] % x == 0){
                break;  
            }
        }
        if(x == num[i] && num[i] > 1){ 
            printf("%d ", num[i]);
        } else {
            printf("# ");
        }
    }

    return 0;
}
