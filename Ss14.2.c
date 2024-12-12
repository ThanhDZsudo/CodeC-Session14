#include <stdio.h>

void printChar(char n[], int size){
    char c;
    printf("Nhap mot chuoi bat ky: ");
    for(int i=0; i<size-1; i++){
        c = getchar();
        if(c=='\n'){
            n[i]='\0';
            break;
        }
        n[i]=c;
        if(i==1){
            printf("%c ", n[i]);
        }else{
            printf("%c", n[i]);
        }
    }
    n[i]= '\0';
	printf("\n");
    printf("Chuoi vua nhap voi khoang cach: ");
    for(int j=0; n[j]!='\0'; j++){
        printf("%c", n[j]);
        if(j == 1){
            printf(" ");
        }
    }
    printf("\n");
}
int main() {
    char n[100];
    printChar(n, sizeof(n));
    return 0;
}

