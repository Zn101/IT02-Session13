#include <stdio.h>
#include <string.h>
int main() {
    char c[100]="abc";
    for (int i=strlen(c)-1;i>=0;i--){
        printf("%c", c[i]);
    }
}
