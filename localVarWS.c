/*
** static variable preserve its value
** in between function calls
*/
#include<stdio.h>

int fun(){
	static int count=0;
	count++;
	return count;
}

int main(){
	printf("%d\n",fun());
	printf("%d\n",fun());
	return 0;
}
