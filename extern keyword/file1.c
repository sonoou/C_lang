#include "file1.h"
#include<stdio.h>

int  file1_var=100;

int addition_1(int a,int b){
	file1_var=file1_var+100;
	printf("Inside file1.c addition(). file1_var = %d\n",file1_var);
	return a+b;
}

