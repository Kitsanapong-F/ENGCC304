#include <stdio.h>

int main() {
    int money;
    int b1000, b500, b100, b50, b20;
    int c10, c5, c2, c1;
     int sb1000=20, sb500, sb100, sb50, sb20;
    int sc10, sc5, sc2, sc1;

    printf("กรอกจำนวนเงิน: ");
    scanf("%d", &money);

    b1000 = money / 1000;
    money %= 1000;

    b500 = money / 500;
    money %= 500;

    b100 = money / 100;
    money %= 100;

    b50 = money / 50;
    money %= 50;

    b20 = money / 20;
    money %= 20;

    c10 = money / 10;
    money %= 10;

    c5 = money / 5;
    money %= 5;

    c2 = money / 2;
    money %= 2;

    c1 = money;

    printf("แบงค์ 1000 = %d ใบ\n", b1000);
    printf("แบงค์ 500  = %d ใบ\n", b500);
    printf("แบงค์ 100  = %d ใบ\n", b100);
    printf("แบงค์ 50   = %d ใบ\n", b50);
    printf("แบงค์ 20   = %d ใบ\n", b20);
    printf("เหรียญ 10  = %d เหรียญ\n", c10);
    printf("เหรียญ 5   = %d เหรียญ\n", c5);
    printf("เหรียญ 2   = %d เหรียญ\n", c2);
    printf("เหรียญ 1   = %d เหรียญ\n", c1);
    printf("%d\n", sb1000);

    return 0;
}