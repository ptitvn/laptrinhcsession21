#include <stdio.h>
#include <string.h>

int main() {
    char chuoiMoi[100];

    printf("Nhap chuoi muon them vao: ");
    fgets(chuoiMoi, 100, stdin);

    FILE *fptr = fopen("bt01.txt", "a");

    if (fptr == NULL) {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }

    fputs(chuoiMoi, fptr);

    fclose(fptr);

    printf("Da ghi them chuoi vao file bt01.txt thanh cong!\n");

    return 0;
}