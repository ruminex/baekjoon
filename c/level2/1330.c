#include <stdio.h>

int main() {
	
	int first, second;
	
	scanf("%d %d", &first, &second);
		
	if(first>second){
		printf(">");
	}
	
	if(first==second){
		printf("==");
	}
	
	if(first<second){
		printf("<");
	}
	return 0;
	
}
