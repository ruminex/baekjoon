#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, tmp, t_digit, u_digit, result, Num_tmp;
	int times = 0;
	scanf("%d", &N);
	Num_tmp = N;
	
	while(1){
		t_digit = N / 10;
		u_digit = N % 10;
		tmp = (t_digit + u_digit) % 10;
		result = (u_digit * 10) + tmp;
		N = result;
		times++;
		if(result == Num_tmp){
			break;
		}		
	}
	printf("%d",times);
	return 0;
}