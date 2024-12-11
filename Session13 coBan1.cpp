#include <stdio.h>
#include <string.h>
int main() {
    char c[100];
    printf("Nhap vao xau ky tu: ");
    scanf("%s",&c); 
    printf("Xau ky tu vua nhap: %s\n",c);
    printf("Do dai xau ky tu la: %d",strlen(c));
}
