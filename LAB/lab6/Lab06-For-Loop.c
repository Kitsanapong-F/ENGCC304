#include <stdio.h>
int main(){
int N=0;
   printf("Enter value:");
   if (scanf("%d",&N )!=1){
        printf("Please enter number only.");
        return 0;
   }
  if(N%2==0){
    for(int i=N; i>=0; i--){
      if(i%2==0){  
      printf("%d ",i);
      }
    }
  } else{
    for(int i=1;i<=N;i++){
      if(i%2==1){
        printf("%d ",i);
      }
    }

  }
return 0;
}
