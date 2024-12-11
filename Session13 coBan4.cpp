#include <stdio.h>
#include <string.h>
int main() {
    char answer;
    int count;
    char c[100]="abc";
    printf("Moi Nhap vao ky tu bat ki: ");
    scanf("%c",&answer);
    for (int i=0;i<strlen(c);i++){
        if(answer==c[i]){
            count++;
        }
    }
    printf("So lan xuat hien cua ki tu trong xau la: %d",count);
}
