#include <stdio.h>
#include <stdbool.h>

int main() {
    bool Condition = true;
    int N = 0;
    printf("Enter number : ");
    scanf("%d", &N);

    int i = N;

    while (Condition) {
     if (i < 2) {            
        Condition = false;
     } else {
        int x = 2;
        bool Condition1 = true;
    while (Condition1) {
        if (x >= i) {     
        printf("%d ", i); 
            Condition1 = false;
            }
        else if (i % x == 0) { 
            Condition1 = false; 
                }
            x=x+1;
          }
        }
      i=i-1;   
    }

    return 0;
}