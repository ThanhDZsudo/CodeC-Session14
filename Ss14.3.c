#include <stdio.h>

void reverse(char n[], int size){
    int length;
    for (length=0; n[length]!='\0'; length++);
    printf("Chuoi dao nguoc: ");
    for(int i=length-1; i>=0; i--){
        printf("%c", n[i]);
    }
    printf("\n");
}
int main(){
    char n[100];
    char c;
    printf("Nhap mot chuoi bat ky: ");
    for(int i=0; i<sizeof(n)-1; i++){
        c=getchar();
        if (c=='\n') {
            n[i]='\0';
            break;
        }
        n[i] = c;
    }
    printf("Chuoi ban dau: %s \n", n);
    reverse(n, sizeof(n));
    return 0;
}

