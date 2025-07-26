#include <stdio.h>

int main(){
 int  score=0;
  
 printf("Enter score: ");
    if (scanf("%d", &score) != 1) {
        printf("Please enter number only.\n");
        return 1;
    }
    
    if (score >=80) {
        printf("A !");
    } 
    else if (score >= 75 && score <= 79) {
        printf("B+ !");
    }
    else if(score>=70&& score<=74) {
        printf("B !");
    }
    else if (score>=65&&score<=69){
        printf("C+ !");
    }
    else if (score>=60&&score<=64){
        printf("C !");
    }
    else if (score>=55&&score<=59){
        printf("D+ !");
    }
    else if (score>=50&&score<=54){
        printf("D !");
    }
    
    else(score<=49) {
        printf("F !");
    }

    return 0;


}