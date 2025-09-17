/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int array[100];
    bool condition=true;
    int i=0;
    while(condition){
        printf("input :\n");
        scanf("%d",&array[i]);
        if(array[i] == -1){
            condition = false;
        }
        i++;
    }
    
    printf("output :\n");
    printf("0-99 :");
    
    for(int x=0;x<i-1;x++){
        printf(" %d ",array[x]);
    }
    
    printf("\n99-0 :");
    for(int r=i-2;r>=0;r--){
        printf(" %d ",array[r]);
    }
    
}