#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Nhập vào số nguyên thứ nhất: ");
    scanf("%d", &num1);

    printf("Nhập vào số nguyên thứ hai: ");
    scanf("%d", &num2);

    printf("Nhập vào số nguyên thứ ba: ");
    scanf("%d", &num3);

    if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
        printf("Số %d nằm trong khoảng giữa %d và %d.\n", num3, num1, num2);
    } else {
        printf("Số %d không nằm trong khoảng giữa %d và %d.\n", num3, num1, num2);
    }

    return 0;
}
