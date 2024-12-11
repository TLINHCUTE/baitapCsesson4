#include <stdio.h>

int main() {
    int num;

    printf("Nhập vào một số nguyên: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("Số %d chia hết cho cả 3 và 5.\n", num);
    } else if (num % 3 == 0) {
        printf("Số %d chia hết cho 3.\n", num);
    } else if (num % 5 == 0) {
        printf("Số %d chia hết cho 5.\n", num);
    } else {
        printf("Số %d không chia hết cho 3 hoặc 5.\n", num);
    }

    return 0;
}

