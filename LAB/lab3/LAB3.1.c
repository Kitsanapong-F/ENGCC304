#include<stdio.h>
int main(){
    float high=0,weight=0;
    printf("H =");
    scanf("%f",&high);
    printf("W =");
    scanf("%f",&weight);
    printf("Area = %.1f",(high*weight)/2);//นำตัวแปล high มาคูณกับตัวแปร weight แล้วนำมาหาร 2
}//end main function