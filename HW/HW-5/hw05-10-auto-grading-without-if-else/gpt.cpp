#include <stdio.h>
int main() {
    int answer = 0;
    printf("Enter number: ");
    scanf("%d", &answer);

    switch (answer / 10) {
        case 10: // 100
        case 9:  // 90–99
        case 8:  // 80–89
            printf("A");
            break;
        case 7:  // 70–79
        case 6:  // 60–69
            printf("C");
            break;
        case 5:  // 50–59
            switch (answer) { // ใช้ซ้อนเพื่อตรวจ D+ กับ D
                case 55 ... 59:
                    printf("D+");
                    break;
                case 50 ... 54:
                    printf("D");
                    break;
            }
            break;
        default: // ต่ำกว่า 50
            if (answer >= 0 && answer <= 49)
                printf("F");
            else
                printf("Enter number (0-100)");
    }

    return 0;
}
