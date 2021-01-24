#include <stdio.h>

int main() {
	int N,tmp,Max,Min;
	
	scanf("%d",&N);
	int Q[N];
	
	for(int i=0; i<N; i++){
		scanf("%d",&tmp);
		Q[i] = tmp;
	}
	Max = Q[0];
	Min = Q[0];
	
	for(int i=0; i<N; i++){
		if(Max < Q[i]){
			Max = Q[i];
		}
		
		if(Min > Q[i]){
			Min = Q[i];
		}
	}
	
	printf("%d %d",Min,Max);
	
	return 0;
}