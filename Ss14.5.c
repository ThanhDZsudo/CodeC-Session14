#include <stdio.h>
int main() {
    char n[1000];
    int i = 0, wordCount = 0;
    int inWord = 0;
    printf("nhap chuoi : ");
    fgets(n, sizeof(n), stdin);
    while(n[i] != '\0'){
        if(n[i] == ' '){
            inWord = 0;
        }else if(inWord == 0){
            wordCount++;
            inWord = 1;
        }
        i++;
    }
    printf("so tu trong chuoi la: %d \n", wordCount);
    return 0;
}
