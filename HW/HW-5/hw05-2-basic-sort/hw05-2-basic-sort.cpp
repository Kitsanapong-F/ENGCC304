/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/ 
#include<stdio.h>
int main(){

int A=0 , B=0 ,C=0 ;

printf("Input[1] :");
scanf("%d",&A);
printf("Input[2] :");
scanf("%d",&B);
printf("Input[3] :");
scanf("%d",&C);
if(A >= B && B >= C){
    printf("Output:%d %d %d\n",A,B,C);
}
else if(A>=C && C>=B)
{
 printf("Output:\n",A,C,B);
}
else if(B>=A && A>=C){
     printf("Output:%d %d %d\n",B,A,C);
}
else if (B>=C&& C>=A){
     printf("Output:%d %d %d\n",B,C,A);
}
else if(C>=A && A>=B){
     printf("Output:%d %d %d\n",C,A,B);
}
else if(C>=B&& B>=A){
     printf("Output:%d %d %d\n",C,B,A);
}
else{
    printf("enternumber");
}
return 0;
}

