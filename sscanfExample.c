#include<stdio.h>

int main(){
	char ar[50]="appsquadz M 15 10.95";
	char str[10];
	char ch;
	int i;
	float f;
	sscanf(ar,"%s %c %i %f",&str,&ch,&i,&f);
	printf("The value in String is %s\n",str);
	printf("The value in char is %c\n",ch);
	printf("The value in int is %d\n",i);
	printf("The value in float is %f\n",f);
	return 0;
}
