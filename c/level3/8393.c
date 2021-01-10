#include <stdio.h>

int main() {
	
	int n;
	int result = 0;
	int j = 1;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		result += j;
		j++;
	}
	
	printf("%d",result);
	
	return 0;
}
