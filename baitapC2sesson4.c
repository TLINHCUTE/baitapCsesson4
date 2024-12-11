#include <stdio.h>

int main() {
    int num;

    printf("Nhập vào một số nguyên: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Số %d là số chẵn.\n", num);
    } else {
        printf("Số %d là số lẻ.\n", num);
    }

    return 0;
}

