#include <stdio.h>
#include <string.h>
int main() {
    int count,numberCount=0,otherCount;
    char c[100];
    printf("Nhap vao xau ky tu: ");
    fgets(c, sizeof(c), stdin);
    for (int i = 0;i<strlen(c);i++){
        if((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')){
            count++;
        }
        else if(c[i] >= '0' && c[i] <= '9'){
            numberCount++;
        }
        else{
            otherCount++;
        }
    }
    printf("So ky tu chu cai trong xau la: %d\n",count);
    printf("So ky tu so trong xau la: %d\n",numberCount);
    printf("So ky tu dac biet trong xau la: %d",otherCount-1);
}
