#include<stdio.h>

void main(){
	int a;
	char ch='A';
	float b = 3.14;
	char str[30];
	printf("%d %c %f\n",a,ch,b);
	sprintf(str,"%d %c %f",a,ch,b);
	printf("%s",str);
}
