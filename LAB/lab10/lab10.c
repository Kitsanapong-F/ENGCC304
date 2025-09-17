
#include <stdio.h>
#include <string.h>

int main() {
    char st[100],re[100];
    printf("Enter string: ");
    scanf("%s", st);
    int len = strlen(st);
        for (int i = 0 ; i<len; i++) {
           re[i]=st[len-1-i];
        }
        re[len]='\0';
    int ans;
        ans=strcmp(st,re);
        if(ans == 0){
            printf("pass");
        }
        else{
            printf("notpass");
        }

    return 0;
}
