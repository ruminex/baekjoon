#include <stdio.h>

int main() {
	
	int N;
	int res = 1;
	scanf("%d",&N);
	
	for(int i = 1; i < 10; i++){
		printf("%d * %d = %d\n",N ,i, res*N);
		res++;
	}
	return 0;
}
