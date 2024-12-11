#include <stdio.h>
#include <string.h>
int main() {
    char c[100];
    printf("Nhap vao xau ky tu: ");
    scanf("%s",&c);
    for (int i=0;i<strlen(c);i++){
        printf("%c ",c[i]);
    }
}
