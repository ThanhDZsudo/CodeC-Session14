#include <stdio.h>
int main(){
	char n[]="troi lanh vai nho";
	int length=sizeof(n)/sizeof(char);
	int i=0;
	int count=0;
	while(n[i]!='\0'){
		if ((n[i] >= 'A' && n[i] <= 'Z') || (n[i] >= 'a' && n[i] <= 'z')) {
            count++;
        }
        i++;
    }
	printf("So ky tu la chu cai co trong chuoi la: %d", count);
	return 0;
}
