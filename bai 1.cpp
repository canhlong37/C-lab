#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
	char str[30];
	int i,k;
	do{
		printf("nhap chuoi:");
		gets(str);
		printf("chuoi cu: %s\n",str);
		printf("chuoi moi:");
		i=strlen(str);
		for(i=strlen(str);i>=0;i--){
			if (str[i]==' '){
				str[i]='\0';
				printf("%s ",&str[i]+1);
			}
		}printf("%s \n",str);
		k=getch();
	}while (k!=27);
return 0;
}
