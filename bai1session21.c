#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];

    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);

    FILE *fptr;
    fptr = fopen("bt01.txt", "w");

    if(fptr == NULL) {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }

    fputs(chuoi, fptr);
    fclose(fptr);

    printf("Da ghi chuoi vao file bt01.txt thanh cong!\n");

    return 0;
}