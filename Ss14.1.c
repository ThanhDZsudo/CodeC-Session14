#include <stdio.h>

void nhapVaIn(char n[], int size){
    char c;
    printf("Nhap mot chuoi bat ky: ");
    for(int i=0; i<size-1; i++){
        c=getchar();
        if(c=='\n'){
            n[i]='\0';
            break;
        }
        n[i]=c;
        if(i==size-2){
            n[i+1]='\0';
        }
    }
    int length=0;
    for (int i=0; n[i]!='\0'; i++){
        length++;
    }
    printf("Chuoi vua nhap: %s\n", n);
    printf("Do dai cua chuoi: %d\n", length);
}
int main(){
    char n[100];
    nhapVaIn(n, sizeof(n));
    return 0;
}

