#include <stdio.h>

int main() {
	
	int Hour,Min;
	int M_tmp, H_tmp;
	
	scanf("%d %d", &Hour, &Min);
	
	H_tmp = Hour;
	M_tmp = (Min - 45);
	
	if(M_tmp < 0){
		
		H_tmp = (Hour - 1);
		M_tmp = M_tmp + 60;
		
		if(H_tmp < 0){
			H_tmp = 23;
		}
	}
	
	printf("%d %d", H_tmp, M_tmp);
	
	return 0;
}
