#include<stdio.h>

int main(){
	int a=10,b=20,c,d;

	/*
	  using increament operator
	*/
	printf("Increament value of a = %d\n",++a);

	/*
	  using decreament operator
	*/
	printf("Decreament value of b = %d\n",--b);

	//first print value of a, then decreament a
	printf("Decreament value of a = %d\n",a--);
	printf("Value of b = %d\n",a);

	//first print value of b, then increament b
	printf("Increament value of b = %d\n",b++);
	printf("Value of b = %d\n",b);

	return 0;
}
