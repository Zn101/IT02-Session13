#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char c[100];
    printf("Nhap vao xau ky tu: ");
    fgets(c, sizeof(c), stdin);
    for (int i = 0;i<strlen(c);i++){
        if(i==0 || c[i-1]==' '){
            if(c[i]>='a'&&c[i]<='z'){
                c[i]=toupper(c[i]);
            }
        }
    }
    printf("%s",c);
}
