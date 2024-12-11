#include <stdio.h>

int main() {
    int month;

    printf("Nhập vào số tháng (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1:
        case 3:
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            printf("Tháng %d có 31 ngày.\n", month);
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            printf("Tháng %d có 30 ngày.\n", month);
            break;
        case 2: 
            printf("Tháng 2 có 28 hoặc 29 ngày (tuỳ vào năm nhuận).\n");
            break;
        default:
            printf("Số tháng %d không hợp lệ.\n", month);
            break;
    }

    return 0;
}
