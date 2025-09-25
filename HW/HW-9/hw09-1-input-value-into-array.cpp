/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int array[100];
    int a=0;
    bool con =true;
    while(con){
        printf("input [%d]",a+1);
        scanf("%d",&array[a]);
        if(array[a]==-1){
            con=false;
        }
        a++;
    }
    printf("index =");
    for(int i=0;i<a-1;i++){
        printf(" %d ",i);
    }
    printf("\nArray =");
    for(int j=1;j<a;j++){
        printf(" %d ",array[j-1]);
    }
    return 0;
}
