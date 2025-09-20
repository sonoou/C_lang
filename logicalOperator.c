#include<stdio.h>

int main(){
	int a=1, b=0, result;

	printf("a = %d, b = %d\n",a,b);

	//AND
	result = ( a && b );
	printf("a && b = %d\n",result);

	//OR
	result = ( a || b);
	printf("a || b = %d\n",result);

	//NOT
	result = !a;
	printf("!a = %d\n",result);

	return 0;
}
