#include <stdio.h>

long long sum(int *a, int n){
	
	long long total = 0;
	for(int i=0;i<n;i++){
		total += a[i];
	}
	
	return total;	
}

/*int main(){
	int n, tmp;
	long long result;
	scanf("%d",&n);
	int a[n];
	for(int j=0; j<n; j++){
		scanf("%d",&tmp);
		a[j] = tmp;
	}
		
	result = sum(a ,n);
	
	printf("%lli",result);
}
얘는 필요 없더라 근데 이거 다른 언어들 함수 연습할문제로 제격인거같다
*/ 
