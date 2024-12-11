#include <stdio.h>

int main() {
    float start, end, consumption, bill;

    printf("Nhập chỉ số công tơ điện đầu tháng: ");
    scanf("%f", &start);
    
    printf("Nhập chỉ số công tơ điện cuối tháng: ");
    scanf("%f", &end);

    if (end < start) {
        printf("Chỉ số công tơ cuối tháng không hợp lệ.\n");
        return 1; 
    }

    consumption = end - start;
    printf("Số điện tiêu thụ trong tháng: %.2f kWh\n", consumption);

    if (consumption <= 50) {
        bill = consumption * 10000;  
    } else if (consumption <= 100) {
        bill = 50 * 10000 + (consumption - 50) * 15000;  
    } else if (consumption <= 150) {
        bill = 50 * 10000 + 50 * 15000 + (consumption - 100) * 20000;  
    } else if (consumption <= 200) {
        bill = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consumption - 150) * 25000;  
    } else {
        bill = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consumption - 200) * 30000;  
    }

    printf("Tiền điện phải trả là: %.2f VND\n", bill);

    return 0;
}
