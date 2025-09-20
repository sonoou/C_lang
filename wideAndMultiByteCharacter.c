#include<stdio.h>
#include<stddef.h>

void main(){
	char ch='xy';
	printf("Multibyte Character = %c\n",ch);
	printf("Multibyte Character = %d\n",sizeof(ch));

	wchar_t wc=L'A';
	printf("Wide Character = %c\n",wc);
	printf("MultiByte Character = %d\n",sizeof(wc));
}
