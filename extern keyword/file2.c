#include "file2.h"
#include<stdio.h>

extern int file1_var;

int addition_2(int a,int b){
	file1_var=file1_var+200;
	printf("Inside file2.c addition(). file1_var = %d\n",file1_var);
	return a+b;
}
