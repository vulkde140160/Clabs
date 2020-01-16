#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void DaoNguoc(char s[]) {
	int i,n;
	n= strlen(s)-1;
	for(i=n; i>=0; i--) printf("%c", s[i]);
}
void ChuyenDoi(char s[]){
	int i;
	for(i=0; i<=strlen(s);i++){
		if (isalpha(s[i])) {
			if (islower(s[i])) s[i]=toupper(s[i]);
			else if(isupper(s[i])) s[i]=tolower(s[i]);	
			}
		}
	DaoNguoc(s);
}				
int main(){
    char s[256];
    int dem[122] = {0};
    int i,n;
    printf("Nhap vao mot chuoi: ");
    gets(s);
	ChuyenDoi(s);    
}
	
