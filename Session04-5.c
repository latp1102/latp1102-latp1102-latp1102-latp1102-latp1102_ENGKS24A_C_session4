#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Kiem tra xem so thu 3 c� nam trong khonng giua so thu hai v� 0 kh�ng
    if ((num2 > 0 && num3 > 0 && num3 < num2) || (num2 < 0 && num3 < 0 && num3 > num2)) {
        printf("So thu 3 nam trong khoang giua so thu 2 va 0\n");
    } else {
        printf("So thu 3 khong nam trong khoang giua so thu 2 va 0\n");
    }

    return 0;
}
