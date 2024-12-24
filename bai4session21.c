#include <stdio.h>

int main() {
    FILE *fptr;
    char dongDauTien[100];

    fptr = fopen("bt01.txt", "r");

    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    fgets(dongDauTien, 100, fptr);

    printf("Dong dau tien trong file la: %s", dongDauTien);

    fclose(fptr);

    return 0;
}