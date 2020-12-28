#include <stdio.h>

int main() {
	
	int leap;
	int a = 0;
	
	scanf("%d", &leap);
	
	if(leap % 4 == 0){
		a++;
		if(leap % 100 == 0){
			a++;
			if(leap % 400 == 0){
				a++;
			}
		}
	}
	
	if(a % 2 == 1){
		printf("1");
	}
	
	else{
		printf("0");
	}
	
	return 0;
	
}
