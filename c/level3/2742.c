#include <stdio.h>

int main(){
	int N, tmp;
	scanf("%d",&N);
	tmp = N;
	
	for(int i=0; i<N; i++){
		
		printf("%d\n",tmp);
		tmp--;
	}
	return 0;
}