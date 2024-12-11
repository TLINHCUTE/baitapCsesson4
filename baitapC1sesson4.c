#include <stdio.h>

int main() {
    int num;

    printf("Nhập vào một số nguyên: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Số %d là số dương.\n", num);
    } else if (num < 0) {
        printf("Số %d là số âm.\n", num);
    } else {
        printf("Số %d là số 0.\n", num);
    }

    return 0;
}
