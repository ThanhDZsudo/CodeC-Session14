#include <stdio.h>
int main(){
	char n[]="xin chao cac ban nhe";
	int length=sizeof(n)/sizeof(char);
	int count=0;
	char a;
	printf("Moi ban nhap vao ky tu bat ky: ");
	scanf("%c", &a);
	for(int i=0;i<length;i++){
		if(n[i]==a){
			count++;
		}
	}printf("So lan xuat hien cua %c la: %d", a, count);
	return 0;
}
