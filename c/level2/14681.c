#include <stdio.h>

int main() {
	
	int x,y;
	int quad;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x>0 && y>0){
		quad = 1;
	}
	
	if(x<0 && y>0){
		quad = 2;
	}
	

	if(x<0 && y<0){
		quad = 3;
	}
		
	if(x>0 && y<0){
		quad = 4;
	}
	
	printf("%d",quad);
	return 0;	
}
