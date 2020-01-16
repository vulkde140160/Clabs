#include<stdio.h>
#include<conio.h>
#include<string.h>


void Dele(char s[90],int PosiDele)
{
	int n=strlen(s);
    for(int i=PosiDele;i<n;i++){
     	s[i]=s[i+1];
	} 
	 s[n-1]='\0';
}
void DeleSpace(char*s)
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			Dele(s,i);
			i--;
		}
    if(s[0]==' ')
		Dele(s,0);
    if(s[strlen(s)-1]==' ')
		Dele(s,strlen(s)-1);
}

int main()
{
    char s[90], c;
    do{
    printf("\nEnter an string, do not allow enter special characters such as @, #, !, [, ], {, }, (, ): \n");
    gets(s);
	DeleSpace(s);
	printf("The string after removing: ");
	puts(s);
	printf("Press enter to continue, Esc to exit.");
    c= getch();
    }while (c!=27);
}
