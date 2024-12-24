#include <stdio.h>

int main() {
    FILE *fptr;
    char kyTuDauTien;

    // mo file 
    fptr = fopen("bt01.txt", "r");

    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    // doc ky tu dau tientien
    kyTuDauTien = fgetc(fptr);
    // kiem tra ky tutu
    if (kyTuDauTien != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", kyTuDauTien);
    } else {
        printf("File rong hoac loi khi doc!\n");
    }

    // dodong file
    fclose(fptr);

    return 0;
}