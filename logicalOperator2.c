#include<stdio.h>

int show(int a,int b);

int main(){
	printf("%d\n",show(1,0));
	printf("%d\n",show(1,1));
	printf("%d\n",show(0,1));
	printf("%d\n",show(0,0));

	return 0;
}

int show(int a,int b){
	return ( a || b ) && !( a && b ) ;
}
