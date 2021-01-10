#include <stdio.h>

int main() {
	
	int N, tmp;
	scanf("%d",&N);
	tmp = N;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<(tmp-1); j++){
			printf(" ");
		}
		
		for(int j=0; j<=(N-tmp); j++){
			printf("*");
		}
		printf("\n");
		tmp--;
	}	
	return 0;
}
