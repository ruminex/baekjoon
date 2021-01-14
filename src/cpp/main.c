#include <stdio.h>

int main(){
	int a = (26%10);
	printf("%d\n",a);
	
	int b = (26 /10);
	b = b % 10;
	printf("%d\n",b);
	
	int c = a+b ; 
	printf("%d\n",c);
}