#include <stdio.h>

int main() {
	
	int N, X, tmp;
	int k = 0;
	int Num[N], Tmp[N];
	scanf("%d %d",&N, &X);
	
	for(int i=0; i<N; i++){
		scanf("%d",&tmp);
		Num[i] = tmp;
		if(Num[i]<X){
			Tmp[k] = Num[i];
			k++;
		}
	}
	
	for(int j=0; j<k; j++){
		printf("%d ",Tmp[j]);
	}
	
	return 0;
}
