#include "file1.h"
#include "file2.h"
#include<stdio.h>

extern int file1_var;

int main(){
	int res1 = addition_1(10,20);
	int res2 = addition_2(30,40);
	printf("file1_var = %d\n",file1_var);
	return 0;
}
// gcc main.c file1.c file2.c -o externVar
