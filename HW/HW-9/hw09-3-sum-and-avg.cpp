/*
    ผู้ใช้กรอกค่า แล้วบันทึกค่าลงไปในอาเรย์(Array1) จากนั้นให้คุณทำการคัดลอกข้อมูลทั้งหมดลงไปในอาเรย์ตัวใหม่(Array2) และให้คุณทำการแสดงข้อมูลในอาเรย์ตัวใหม่ทั้งหมดบนหน้าจอ (เมื่อผู้ใช้กรอก -1 จะถือเป็นการสิ้นสุดการกรอกข้อมูล)
    
    Test case:
        Input value to Array1 [0]: 
            9
        Input value to Array1 [1]: 
            5
        Input value to Array1 [2]: 
            6
        Input value to Array1 [3]: 
            8
        Input value to Array1 [4]: 
            -1
    Output:
        Array1 = 9 5 6 8
        Array2 = 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 9 5 6 8


    Test case:
        Input value to Array1 [0]: 
            7
        Input value to Array1 [1]: 
            -3
        Input value to Array1 [2]: 
            5
        Input value to Array1 [3]: 
            19
        Input value to Array1 [4]: 
            27
        Input value to Array1 [5]: 
            -16
        Input value to Array1 [6]: 
            13
        Input value to Array1 [7]: 
            -7
        Input value to Array1 [8]: 
            -1
    Output:
        Array1 = 7 -3 5 19 27 -16 13 -7
        Array2 = 0 0 0 0 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 7 -3 5 19 27 -16 13 -7

*/
#include<stdio.h>
#include<stdbool.h>
int array2[100];
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
    printf("\nArray1 =");
    for(int j=1;j<a;j++){
        printf(" %d ",array[j-1]);
    }
    printf("\nArray2 =");
    for(int i=1;i<a;i++){
        printf(" %d ",array2[i-1]);
    }
    printf("\n --| Copy Data from Array1 to Array2\n");
    for (int c= 0;  c< a-1; c++) {
        array2[c] = array[c];
    }
    printf("Array2 =");
    for(int x=1;x<a;x++){
        printf(" %d ",array2[x-1]);
    }
    return 0;

}
