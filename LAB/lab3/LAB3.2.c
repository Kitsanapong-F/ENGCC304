#include <stdio.h>
#include <math.h>
int isPrime(int num);
int main() {
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    int arr[n];  // ประกาศอาเรย์ตามจำนวนที่ผู้ใช้กำหนด
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Index:  ");  
    for (int i = 0; i < n; i++) {
        printf("%2d ", i);
    }   
    printf("\n");
    printf("Array:  ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {     // ถ้าเป็นจำนวนเฉพาะ
            printf("%2d ", arr[i]);
        } else {                   // ถ้าไม่ใช่จำนวนเฉพาะ
            printf(" # ");
        }
    }
    printf("\n");
    return 0;
}//end main function

int isPrime(int num) {
    if (num < 2)       // ถ้าน้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)  // ถ้ามีตัวหารลงตัว แสดงว่าไม่ใช่จำนวนเฉพาะ
            return 0;
    }
    return 1;  // ถ้าไม่เจอว่าหารลงตัวเลย -> เป็นจำนวนเฉพาะ
}