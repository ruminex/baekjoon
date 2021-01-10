#include <stdio.h>

int main() {
	
	int down_input, up_input;
	int first, second, third, final_result;
	
	scanf("%d",&down_input);
	scanf("%d",&up_input);
	
	first = up_input % 10;
	up_input = up_input / 10;
	
	second = up_input % 10;
	up_input = up_input / 10;
	
	third = up_input % 10;
	
	
	first = first * down_input;
	second = second * down_input;
	third = third * down_input;
	final_result = first + (second*10) + (third*100);
	
	printf("%d\n",first);
	printf("%d\n",second);
	printf("%d\n",third);
	printf("%d\n",final_result);
	
	return 0;
	
}
