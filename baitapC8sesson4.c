#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhập cạnh thứ nhất: ");
    scanf("%f", &a);
    printf("Nhập cạnh thứ hai: ");
    scanf("%f", &b);
    printf("Nhập cạnh thứ ba: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Là 3 cạnh tam giác.\n");
    } else {
        printf("Không phải 3 cạnh tam giác.\n");
    }

    return 0;
}
