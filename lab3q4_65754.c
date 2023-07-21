#include <stdio.h>

int main() {
    int number, sum = 0, count = 0;

    while (1) {
        printf("กรอกเลข: ");
        scanf("%d", &number);

        if (number <= 0)
            break;

        sum += number;
        count++;
    }

        float average = (float)sum / count;
        printf("ผลรวม: %d\n", sum);
        printf("ค่าเฉลี่ย: %.2f\n", average);

    return 0;
}
