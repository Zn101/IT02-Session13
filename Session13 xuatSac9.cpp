#include <stdio.h>
#include <string.h>
int main() {
    char c[100]="Hello world", ch;
    int j=0;
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    for (int i = 0; i < strlen(c); i++) {
        if (c[i]!=ch){
            c[j++]=c[i];
        }
    }
    c[j]='\0';
    printf("%s",c);
}
