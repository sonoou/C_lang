#include<stdio.h>
#include<stdlib.h>

static int num;

void init(int x);
int even_num();

void main(){
	init(10);
	while(1){
		int n=even_num();
		printf("%d ",n);
		if(n==100){
			exit(0);
		}
	}
}

void init(int z){
	num=z;
}

int even_num(){
	num+=2;
	return num;
}
