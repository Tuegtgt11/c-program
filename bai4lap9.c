#include <stdio.h>

int main() {
    char  student[5][];
    int i;
    printf("Nhap ten hoc sinh vao bang danh sach sau:\n");
    for (i=0; i<5; i++) {
        printf("\nTen hoc sinh so %d la:", i+1);
        scanf("%s",student[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n Hoc sinh so %d la %s", i+1, student[i]);
    }
    printf("\n");
}
