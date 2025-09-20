#include<stdio.h>

int pow1(register int a,register int b);
void main(){
	int a,b;
	printf("Enter the first no -> ");
	scanf("%d",&a);

	printf("Enter the second no -> ");
	scanf("%d",&b);

	int z=pow1(a,b);
	printf("%d",z);
}

int pow1(register int a,register int b){
	register int i;
	register int p=1;
	for(i=1;i<=b;i++){
		p*=a;
	}

	return p;
}
