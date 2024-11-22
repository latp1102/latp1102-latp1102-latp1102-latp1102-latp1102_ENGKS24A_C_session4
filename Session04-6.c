#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi, soDienTieuThu;
    float tienDien = 0;

    // Nhp du lieu tu nguoi dung
    printf("Nhap chi so cu: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    // Tinh so dien tieu thu
    soDienTieuThu = chiSoMoi - chiSoCu;

    
    if (soDienTieuThu >= 0 && soDienTieuThu < 50) {
        tienDien = soDienTieuThu * 10000;
    } else if (soDienTieuThu >= 50 && soDienTieuThu < 100) {
        tienDien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
    } else if (soDienTieuThu >= 100 && soDienTieuThu < 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
    } else if (soDienTieuThu >= 150 && soDienTieuThu < 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
    } else if (soDienTieuThu >= 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
    } else {
        printf("So dien tieu thu khong hop le.\n");
        return 1; 
    }

    // In ket qua
    printf("So tien dien phai tra: %.f\n", tienDien);

    return 0;
}
